#include "Copter.h"

/****************************************************************
 *  Aero4River Code Mathaus
 ****************************************************************/
float Copter::mapCube(float x, float y, float z){
    // Faz o  mapeamento da ações de controle em xyz para valores normalizados. Produzindo um Pseudo-Acoplamento
    float out =0.0f;
    out = x*sqrtf(1 - powf(y,2)/2.0f - powf(z,2)/2.0f + (powf(y,2)*powf(z,2))/3.0f);
    return out;
}

void Copter::get_pilot_desired_force_to_boat()
{
    //Essa abordagem considera que o stick direito controla a força em X e Y.
    //a posição do stick determina a intensidade da foça nos eixos onde, o ponto médio é o (0,0).
    //O Yaw é controlado da mesma maneira que em um quadrotor, contudo, o código foi construido de forma empirica.

    // Calcula o valor médio dos sticks do controle para que seja possível dividir em forças positivas e negativas
    float_t med_roll  = (channel_roll->get_radio_min() + ((channel_roll->get_radio_max() - channel_roll->get_radio_min())/2.0f));
    float_t med_pitch = (channel_pitch->get_radio_min()+ ((channel_pitch->get_radio_max()- channel_pitch->get_radio_min())/2.0f));
    float_t med_yaw   = (channel_yaw->get_radio_min()  + ((channel_yaw->get_radio_max()  - channel_yaw->get_radio_min())/2.0f));

    //Calcula a força em Y a partir do stick de Rolagem
    Y = float(channel_roll->get_radio_in()- med_roll)/float(channel_roll->get_radio_max() - med_roll);
    //Calcula a força em X a partir do stick de Arfagem
    X = float(channel_pitch->get_radio_in()-med_pitch)/float(channel_pitch->get_radio_max()- med_pitch);
    //Calcula o torque em Z a partir do stick de Guinada
    Z = float(channel_yaw->get_radio_in()-  med_yaw)/float(channel_yaw->get_radio_max() - med_yaw);


    GanhoF    = (float)(1.0f*channel_gain->get_radio_in() - channel_gain->get_radio_min())/(channel_gain->get_radio_max()-channel_gain->get_radio_min());

    GanhoF = constrain_float(GanhoF,0.0f,1.0f);

    X = X * GanhoF;
    Y = Y * GanhoF;
    Z = Z * GanhoF;

    X = constrain_float(X,-1.0f,1.0f);
    Y = constrain_float(Y,-1.0f,1.0f);
    Z = constrain_float(Z,-1.0f,1.0f);

    Fx = mapCube(X,Y,Z);
    Fy = mapCube(Y,X,Z);
    Tn = mapCube(Z,X,Y);
    
    // channel_pitch->set_control_in(Fx);
    // channel_roll->set_control_in(Fy);
    // channel_yaw->set_control_in(Tn);

    motors->set_forward(Fx);
    motors->set_lateral(Fy);
    motors->set_yaw(Tn);

}
/****************************************************************/

// transform pilot's yaw input into a desired yaw rate
// returns desired yaw rate in centi-degrees per second
float Copter::get_pilot_desired_yaw_rate(int16_t stick_angle)
{
    // throttle failsafe check
    if (failsafe.radio || !ap.rc_receiver_present) {
        return 0.0f;
    }
    float yaw_request;

    // range check expo
    g2.acro_y_expo = constrain_float(g2.acro_y_expo, 0.0f, 1.0f);

    // calculate yaw rate request
    if (is_zero(g2.acro_y_expo)) {
        yaw_request = stick_angle * g.acro_yaw_p;
    } else {
        // expo variables
        float y_in, y_in3, y_out;

        // yaw expo
        y_in = float(stick_angle)/ROLL_PITCH_YAW_INPUT_MAX;
        y_in3 = y_in*y_in*y_in;
        y_out = (g2.acro_y_expo * y_in3) + ((1.0f - g2.acro_y_expo) * y_in);
        yaw_request = ROLL_PITCH_YAW_INPUT_MAX * y_out * g.acro_yaw_p;
    }
    // convert pilot input to the desired yaw rate
    return yaw_request; //talvez colocar o torque aqui
}

/*************************************************************
 *  throttle control
 ****************************************************************/
// set_throttle_takeoff - allows parents to tell throttle controller we are taking off so I terms can be cleared
// void Copter::set_throttle_takeoff(){
//     // tell position controller to reset alt target and reset I terms
//     pos_control->init_takeoff();
// }
// // get_pilot_desired_climb_rate - transform pilot's throttle input to climb rate in cm/s
// // without any deadzone at the bottom
// float Copter::get_pilot_desired_climb_rate(float throttle_control)
// {
//     // throttle failsafe check
//     if (failsafe.radio || !ap.rc_receiver_present) {
//         return 0.0f;
//     }
// #if TOY_MODE_ENABLED == ENABLED
//     if (g2.toy_mode.enabled()) {
//         // allow throttle to be reduced after throttle arming and for
//         // slower descent close to the ground
//         g2.toy_mode.throttle_adjust(throttle_control);
//     }
// #endif
//     float desired_rate = 0.0f;
//     float mid_stick = get_throttle_mid();
//     float deadband_top = mid_stick + g.throttle_deadzone;
//     float deadband_bottom = mid_stick - g.throttle_deadzone;
//     // ensure a reasonable throttle value
//     throttle_control = constrain_float(throttle_control,0.0f,1000.0f);
//     // ensure a reasonable deadzone
//     g.throttle_deadzone = constrain_int16(g.throttle_deadzone, 0, 400);
//     // check throttle is above, below or in the deadband
//     if (throttle_control < deadband_bottom) {
//         // below the deadband
//         desired_rate = get_pilot_speed_dn() * (throttle_control-deadband_bottom) / deadband_bottom;
//     } else if (throttle_control > deadband_top) {
//         // above the deadband
//         desired_rate = g.pilot_speed_up * (throttle_control-deadband_top) / (1000.0f-deadband_top);
//     } else {
//         // must be in the deadband
//         desired_rate = 0.0f;
//     }
//     return desired_rate;
// }

// // get_non_takeoff_throttle - a throttle somewhere between min and mid throttle which should not lead to a takeoff
float Copter::get_non_takeoff_throttle()
{
    return MAX(0,motors->get_throttle_hover()/2.0f);
}

// set_accel_throttle_I_from_pilot_throttle - smoothes transition from pilot controlled throttle to autopilot throttle
void Copter::set_accel_throttle_I_from_pilot_throttle()
{
    // get last throttle input sent to attitude controller
    float pilot_throttle = constrain_float(attitude_control->get_throttle_in(), 0.0f, 1.0f);
    // shift difference between pilot's throttle and hover throttle into accelerometer I
    pos_control->get_accel_z_pid().set_integrator((pilot_throttle-motors->get_throttle_hover()) * 1000.0f);
}

// rotate vector from vehicle's perspective to North-East frame
void Copter::rotate_body_frame_to_NE(float &x, float &y)
{
    float ne_x = x*ahrs.cos_yaw() - y*ahrs.sin_yaw();
    float ne_y = x*ahrs.sin_yaw() + y*ahrs.cos_yaw();
    x = ne_x;
    y = ne_y;
}

// It will return the PILOT_SPEED_DN value if non zero, otherwise if zero it returns the PILOT_SPEED_UP value.
uint16_t Copter::get_pilot_speed_dn()
{
    if (g2.pilot_speed_dn == 0) {
        return abs(g.pilot_speed_up);
    } else {
        return abs(g2.pilot_speed_dn);
    }
}
