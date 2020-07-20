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

// float Copter::PWMtoNorm(float pwm){
//     /// Entra um valor de PWM e sai de 0 a 1
//     float V = float(pwm - Pwmmin)/float(Pwmmax-Pwmmin);
//     return constrain_float(V,0.0f,1.0f);
// }

// void Copter::Allocacao_Direta(float &Theta1,float &Theta2,float &Theta3,float &Theta4,float &PWM1,float &PWM2,float &PWM3,float &PWM4){
//     FX_out = (float)(PWM1*k1*cosf(Theta1) + PWM2*k2*cosf(Theta2) + PWM3*k3*cosf(Theta3) + PWM4*k4*cosf(Theta4));
//     FY_out = (float)(PWM1*k1*sinf(Theta1) + PWM2*k2*sinf(Theta2) + PWM3*k3*sinf(Theta3) + PWM4*k4*sinf(Theta4));
//     TN_out = (float)(Lx*(PWM1*k1*sinf(Theta1) - PWM2*k2*sinf(Theta2) + PWM3*k3*sinf(Theta3) - PWM4*k4*sinf(Theta4)) - Ly*(PWM1*k1*cosf(Theta1) - PWM2*k2*cosf(Theta2) - PWM3*k3*cosf(Theta3) + PWM4*k4*cosf(Theta4)));
// }

// float Copter::NormtoPWM(float val){
//     /// Entra um valor de 0 a 1 e sai um PWM
//     return val*(Pwmmax-Pwmmin) + Pwmmin;
// }


// void Copter::FOSSEN_alocation_matrix(float &FX,float &FY,float &TN,float &Theta1,float &Theta2,float &Theta3,float &Theta4,float &PWM1,float &PWM2,float &PWM3,float &PWM4)
// {
//     /// TRABALHA COM RADIANOS
//     /// Fx = força no eixo X - Seu valor deve variar de -1 a 1
//     /// Fy = força no eixo y - Seu valor deve variar de -1 a 1
//     /// N  = tork de guinada - Seu valor deve variar de -1 a 1
//     /// Função para alocar as forças do barco a partir da metodologia descrita em FOSSEN

//     //Tratamento para o stick do throttle estar sempre acima da zona morta --- (TALvez tirar daqui)
//     if(channel_throttle->get_radio_in()<channel_throttle->get_radio_min()*1.1){
//         FX = 0.0f;
//         FY = 0.0f;
//         TN = 0.0f;
//     }

//     FX = constrain_float(FX,-1.0f,1.0f);
//     FY = constrain_float(FY,-1.0f,1.0f);
//     TN = constrain_float(TN,-1.0f,1.0f);

//     TN = TN * Nmax;
//     FX = FX * Fmax;
//     FY = FY * Fmax;

//     FT = safe_sqrt(sq(TN) + sq(FX) + sq(FY));
//     FT = constrain_float(FT,0.0f,Fmax);

//     // Converte o valor normalizado de 0  a 1 para PWM
//     PWM1 = NormtoPWM(PWM1);
//     PWM2 = NormtoPWM(PWM2);
//     PWM3 = NormtoPWM(PWM3);
//     PWM4 = NormtoPWM(PWM4);

//     // Convertendo de grau para Radianos
//     Theta1 = Theta1 * DEG_TO_RAD;
//     Theta2 = Theta2 * DEG_TO_RAD;
//     Theta3 = Theta3 * DEG_TO_RAD;
//     Theta4 = Theta4 * DEG_TO_RAD;

//     if(FT<0.02*Fmax){
//         // Se as forças são muito pequenas (proximas a zero) nao executa a matriz de alocação envia todos os angulos  nulos
//         Theta1 = 0.0f;
//         Theta2 = 0.0f;
//         Theta3 = 0.0f;
//         Theta4 = 0.0f;

//         //Envia todos os PWMs muito pequenos (Nulos-Na prática) Os valores aqui, não estão normalizados entre 0 e 1
//         PWM1 = NormtoPWM(0.0f);
//         PWM2 = NormtoPWM(0.0f);
//         PWM3 = NormtoPWM(0.0f);
//         PWM4 = NormtoPWM(0.0f);

//     }else{
//         // ========================================== PWM calculado a partir da força e dos angulos ====================================
//         PWM1 = (safe_sqrt(sq(FX/(4*k1) - (Ly*TN)/(4*k1*(sq(Lx) + sq(Ly)))) + sq(FY/(4*k1) + (Lx*TN)/(4*k1*(sq(Lx) + sq(Ly))))));
//         PWM2 = (safe_sqrt(sq(FX/(4*k2) + (Ly*TN)/(4*k2*(sq(Lx) + sq(Ly)))) + sq(FY/(4*k2) - (Lx*TN)/(4*k2*(sq(Lx) + sq(Ly))))));
//         PWM3 = (safe_sqrt(sq(FX/(4*k3) + (Ly*TN)/(4*k3*(sq(Lx) + sq(Ly)))) + sq(FY/(4*k3) + (Lx*TN)/(4*k3*(sq(Lx) + sq(Ly))))));
//         PWM4 = (safe_sqrt(sq(FX/(4*k4) - (Ly*TN)/(4*k4*(sq(Lx) + sq(Ly)))) + sq(FY/(4*k4) - (Lx*TN)/(4*k4*(sq(Lx) + sq(Ly))))));

//         // Saturação
//         PWM1 = constrain_float(PWM1,Pwmmin,Pwmmax);
//         PWM2 = constrain_float(PWM2,Pwmmin,Pwmmax);
//         PWM3 = constrain_float(PWM3,Pwmmin,Pwmmax);
//         PWM4 = constrain_float(PWM4,Pwmmin,Pwmmax);

//         // =============================== Arco seno do angulo calculado a partir da força e do novo PWM ===============================
//         Theta1 = atan2f((FY/(4*k1) + (Lx*TN)/(4*k1*(sq(Lx) + sq(Ly)))),(FX/(4*k1) - (Ly*TN)/(4*k1*(sq(Lx) + sq(Ly)))));
//         Theta2 = atan2f((FY/(4*k2) - (Lx*TN)/(4*k2*(sq(Lx) + sq(Ly)))),(FX/(4*k2) + (Ly*TN)/(4*k2*(sq(Lx) + sq(Ly)))));
//         Theta3 = atan2f((FY/(4*k3) + (Lx*TN)/(4*k3*(sq(Lx) + sq(Ly)))),(FX/(4*k3) + (Ly*TN)/(4*k3*(sq(Lx) + sq(Ly)))));
//         Theta4 = atan2f((FY/(4*k4) - (Lx*TN)/(4*k4*(sq(Lx) + sq(Ly)))),(FX/(4*k4) - (Ly*TN)/(4*k4*(sq(Lx) + sq(Ly)))));

//         // Saturação
//         Theta1 = constrain_float(Theta1,-M_PI,M_PI);
//         Theta2 = constrain_float(Theta2,-M_PI,M_PI);
//         Theta3 = constrain_float(Theta3,-M_PI,M_PI);
//         Theta4 = constrain_float(Theta4,-M_PI,M_PI);
//     }

//     Allocacao_Direta(Theta1, Theta2, Theta3, Theta4, PWM1, PWM2, PWM3, PWM4);

//     // Normaliza o valor de PWM encontrado entre 0 e 1 para ativar a saida entre mínima e maxima potência
//     PWM1 = PWMtoNorm(PWM1);
//     PWM2 = PWMtoNorm(PWM2);
//     PWM3 = PWMtoNorm(PWM3);
//     PWM4 = PWMtoNorm(PWM4);

//     // Conveter o valor de Theta para Graus
//     Theta1 = Theta1 * RAD_TO_DEG;
//     Theta2 = Theta2 * RAD_TO_DEG;
//     Theta3 = Theta3 * RAD_TO_DEG;
//     Theta4 = Theta4 * RAD_TO_DEG;
// }

void Copter::get_pilot_desired_force_to_boat_M()
{

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
void Copter::set_throttle_takeoff()
{
    // tell position controller to reset alt target and reset I terms
    pos_control->init_takeoff();
}

// get_pilot_desired_climb_rate - transform pilot's throttle input to climb rate in cm/s
// without any deadzone at the bottom
float Copter::get_pilot_desired_climb_rate(float throttle_control)
{
    // throttle failsafe check
    if (failsafe.radio || !ap.rc_receiver_present) {
        return 0.0f;
    }

#if TOY_MODE_ENABLED == ENABLED
    if (g2.toy_mode.enabled()) {
        // allow throttle to be reduced after throttle arming and for
        // slower descent close to the ground
        g2.toy_mode.throttle_adjust(throttle_control);
    }
#endif

    float desired_rate = 0.0f;
    float mid_stick = get_throttle_mid();
    float deadband_top = mid_stick + g.throttle_deadzone;
    float deadband_bottom = mid_stick - g.throttle_deadzone;

    // ensure a reasonable throttle value
    throttle_control = constrain_float(throttle_control,0.0f,1000.0f);

    // ensure a reasonable deadzone
    g.throttle_deadzone = constrain_int16(g.throttle_deadzone, 0, 400);

    // check throttle is above, below or in the deadband
    if (throttle_control < deadband_bottom) {
        // below the deadband
        desired_rate = get_pilot_speed_dn() * (throttle_control-deadband_bottom) / deadband_bottom;
    } else if (throttle_control > deadband_top) {
        // above the deadband
        desired_rate = g.pilot_speed_up * (throttle_control-deadband_top) / (1000.0f-deadband_top);
    } else {
        // must be in the deadband
        desired_rate = 0.0f;
    }

    return desired_rate;
}

// get_non_takeoff_throttle - a throttle somewhere between min and mid throttle which should not lead to a takeoff
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
