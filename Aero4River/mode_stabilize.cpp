#include "Copter.h"

/*
 * Init and run calls for stabilize flight mode
 */
// void Copter::get_pilot_desired_force_to_boat_M()
// {
//     //Essa abordagem considera que o stick direito controla a força em X e Y.
//     //a posição do stick determina a intensidade da foça nos eixos onde, o ponto médio é o (0,0).
//     //O Yaw é controlado da mesma maneira que em um quadrotor, contudo, o código foi construido de forma empirica.

//     // Calcula o valor médio dos sticks do controle para que seja possível dividir em forças positivas e negativas

//     float_t med_roll  = (channel_roll->get_radio_min() + ((channel_roll->get_radio_max() - channel_roll->get_radio_min())/2.0f));
//     float_t med_pitch = (channel_pitch->get_radio_min()+ ((channel_pitch->get_radio_max()- channel_pitch->get_radio_min())/2.0f));
//     float_t med_yaw   = (channel_yaw->get_radio_min()  + ((channel_yaw->get_radio_max()  - channel_yaw->get_radio_min())/2.0f));

//     //Calcula a força em Y a partir do stick de Rolagem
//     Y = float(channel_roll->get_radio_in()- med_roll)/float(channel_roll->get_radio_max() - med_roll);
//     //Calcula a força em X a partir do stick de Arfagem
//     X = float(channel_pitch->get_radio_in()-med_pitch)/float(channel_pitch->get_radio_max()- med_pitch);
//     //Calcula o torque em Z a partir do stick de Guinada
//     Z = float(channel_yaw->get_radio_in()-  med_yaw)/float(channel_yaw->get_radio_max() - med_yaw);


//     GanhoF    = (float)(1.0f*channel_gain->get_radio_in() - channel_gain->get_radio_min())/(channel_gain->get_radio_max()-channel_gain->get_radio_min());

//     GanhoF < 0.0f ? GanhoF = 0.0f : GanhoF = GanhoF;
//     GanhoF > 1.0f ? GanhoF = 1.0f : GanhoF = GanhoF;

//     X = X   * GanhoF;
//     Y = Y   * GanhoF;
//     Z = Z   * GanhoF;

//     X  = constrain_float(X,-1.0f,1.0f);
//     Y  = constrain_float(Y,-1.0f,1.0f);
//     Z  = constrain_float(Z,-1.0f,1.0f);

//     Fx = mapCube(X,Y,Z);
//     Fy = mapCube(Y,X,Z);
//     tN = mapCube(Z,X,Y);
// }

// stabilize_run - runs the main stabilize controller
// should be called at 100hz or more
void ModeStabilize::run()
{
    // apply simple mode transform to pilot inputs
    update_simple_mode();

    // convert pilot input to lean angles
    float target_roll, target_pitch;
    get_pilot_desired_lean_angles(target_roll, target_pitch, copter.aparm.angle_max, copter.aparm.angle_max);
 
    // get pilot's desired yaw rate
    float target_yaw_rate = get_pilot_desired_yaw_rate(channel_yaw->get_control_in());

    if (!motors->armed()) {
        // Motors should be Stopped
        motors->set_desired_spool_state(AP_Motors::DesiredSpoolState::SHUT_DOWN);
    } else if (copter.ap.throttle_zero) {
        // Attempting to Land
        motors->set_desired_spool_state(AP_Motors::DesiredSpoolState::GROUND_IDLE);
    } else {
        motors->set_desired_spool_state(AP_Motors::DesiredSpoolState::THROTTLE_UNLIMITED);
    }

    switch (motors->get_spool_state()) {
    case AP_Motors::SpoolState::SHUT_DOWN:
        // Motors Stopped
        attitude_control->set_yaw_target_to_current_heading();
        attitude_control->reset_rate_controller_I_terms();
        break;

    case AP_Motors::SpoolState::GROUND_IDLE:
        // Landed
        attitude_control->set_yaw_target_to_current_heading();
        attitude_control->reset_rate_controller_I_terms();
        break;

    case AP_Motors::SpoolState::THROTTLE_UNLIMITED:
        // clear landing flag above zero throttle
        if (!motors->limit.throttle_lower) {
            set_land_complete(false);
        }
        break;

    case AP_Motors::SpoolState::SPOOLING_UP:
    case AP_Motors::SpoolState::SPOOLING_DOWN:
        // do nothing
        break;
    }

    // call attitude controller
    attitude_control->input_euler_angle_roll_pitch_euler_rate_yaw(target_roll, target_pitch, target_yaw_rate);

    // output pilot's throttle
    attitude_control->set_throttle_out(get_pilot_desired_throttle(),
                                       true,
                                       g.throttle_filt);
}
