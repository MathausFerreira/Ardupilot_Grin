/*
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License 
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 *       AP_MotorsRiver.cpp - ArduCopter motors library
 *       Code by Mathaus Ferreira - mathaus.silva@engenharia.ufjf.br
 */

#include <AP_HAL/AP_HAL.h>
#include "AP_MotorsRiver.h"

#include <GCS_MAVLink/GCS.h>
extern const AP_HAL::HAL &hal;

// init
void AP_MotorsRiver::init(motor_frame_class frame_class, motor_frame_type frame_type)
{
    // record requested frame class and type
    _last_frame_class = frame_class;
    _last_frame_type = frame_type;

    // setup the motors
    setup_motors(frame_class, frame_type);

    // enable fast channels or instant pwm
    set_update_rate(_speed_hz);
}

// set update rate to motors - a value in hertz
void AP_MotorsRiver::set_update_rate(uint16_t speed_hz)
{
    // record requested speed
    _speed_hz = speed_hz;

    uint16_t mask = 0;
    for (uint8_t i = 0; i < AP_MOTORS_MAX_NUM_MOTORS; i++)
    {
        if (motor_enabled[i])
        {
            mask |= 1U << i;
        }
    }
    rc_set_freq(mask, _speed_hz);
}

// set frame class (i.e. quad, hexa, heli) and type (i.e. x, plus)
void AP_MotorsRiver::set_frame_class_and_type(motor_frame_class frame_class, motor_frame_type frame_type)
{
    // exit immediately if armed or no change
    if (armed() || (frame_class == _last_frame_class && _last_frame_type == frame_type))
    {
        return;
    }
    _last_frame_class = frame_class;
    _last_frame_type = frame_type;

    // setup the motors
    setup_motors(frame_class, frame_type);

    // enable fast channels or instant pwm
    set_update_rate(_speed_hz);
}

void AP_MotorsRiver::output_to_motors()
{
    // static uint8_t counter = 0;
    // counter++;
    // if (counter > 50)
    // {
    //     counter = 0;
    //     gcs().send_text(MAV_SEVERITY_CRITICAL, "Murillo is gay");
    // }

    int8_t i;

    switch (_spool_state)
    {
    case SpoolState::SHUT_DOWN:
    {
        // no output
        for (i = 0; i < AP_MOTORS_MAX_NUM_MOTORS; i++)
        {
            if (motor_enabled[i])
            {
                _actuator[i] = 0.0f;
            }
        }
        break;
    }
    case SpoolState::GROUND_IDLE:
        // sends output to motors when armed but not flying
        for (i = 0; i < AP_MOTORS_MAX_NUM_MOTORS; i++)
        {
            if (motor_enabled[i])
            {
                set_actuator_with_slew(_actuator[i], actuator_spin_up_to_ground_idle());
            }
        }
        break;
    case SpoolState::SPOOLING_UP:
    case SpoolState::THROTTLE_UNLIMITED:
    case SpoolState::SPOOLING_DOWN:
        // set motor output based on thrust requests
        for (i = 0; i < AP_MOTORS_MAX_NUM_MOTORS; i++)
        {
            if (motor_enabled[i])
            {
                _actuator[i] = _thrust_rpyt_out[i];
            }
        }
        break;
    }

    // convert output to PWM and send to each motor
    for (i = 0; i < AP_MOTORS_MAX_NUM_MOTORS; i++)
    {
        if (motor_enabled[i])
        {
            rc_write(i, output_to_pwm(_actuator[i]));
        }
    }
}

// get_motor_mask - returns a bitmask of which outputs are being used for motors (1 means being used)
//  this can be used to ensure other pwm outputs (i.e. for servos) do not conflict
uint16_t AP_MotorsRiver::get_motor_mask()
{
    uint16_t motor_mask = 0;
    for (uint8_t i = 0; i < AP_MOTORS_MAX_NUM_MOTORS; i++)
    {
        if (motor_enabled[i])
        {
            motor_mask |= 1U << i;
        }
    }
    uint16_t mask = rc_map_mask(motor_mask);

    // add parent's mask
    mask |= AP_MotorsMulticopter::get_motor_mask();

    return mask;
}

// output_armed - sends commands to the motors
// includes new scaling stability patch
void AP_MotorsRiver::output_armed_stabilizing()
{ 
    static uint8_t counter = 0;
    counter++;
    if (counter > 50)
    {
        counter = 0;
        gcs().send_text(MAV_SEVERITY_CRITICAL, "PitchIN : %5.3f RollIN : %5.3f YawIN : %5.3f", (double)_pitch_in,(double)_roll_in,(double)_yaw_in);
    }

    FOSSEN_alocation_matrix(_pitch_in,_roll_in,_yaw_in,theta_m1,theta_m2,theta_m3,theta_m4,Pwm1,Pwm2,Pwm3,Pwm4);

    _thrust_rpyt_out[0] = Pwm1;
    _thrust_rpyt_out[1] = Pwm2;
    _thrust_rpyt_out[2] = Pwm3;
    _thrust_rpyt_out[3] = Pwm4;

    _thrust_rpyt_out[4] = theta_m1;
    _thrust_rpyt_out[5] = theta_m2;
    _thrust_rpyt_out[6] = theta_m3;
    _thrust_rpyt_out[7] = theta_m4;

    
   }


/* ****************************** Mathaus *********************************
***************************************************************************/

float AP_MotorsRiver::PWMtoNorm(float pwm){
    /// Entra um valor de PWM e sai de 0 a 1
    float V = float(pwm - Pwmmin)/float(Pwmmax-Pwmmin);
    return constrain_float(V,0.0f,1.0f);
}

// void AP_MotorsRiver::Allocacao_Direta(float &Theta1,float &Theta2,float &Theta3,float &Theta4,float &PWM1,float &PWM2,float &PWM3,float &PWM4){
//     FX_out = (float)(PWM1*k1*cosf(Theta1) + PWM2*k2*cosf(Theta2) + PWM3*k3*cosf(Theta3) + PWM4*k4*cosf(Theta4));
//     FY_out = (float)(PWM1*k1*sinf(Theta1) + PWM2*k2*sinf(Theta2) + PWM3*k3*sinf(Theta3) + PWM4*k4*sinf(Theta4));
//     TN_out = (float)(Lx*(PWM1*k1*sinf(Theta1) - PWM2*k2*sinf(Theta2) + PWM3*k3*sinf(Theta3) - PWM4*k4*sinf(Theta4)) - Ly*(PWM1*k1*cosf(Theta1) - PWM2*k2*cosf(Theta2) - PWM3*k3*cosf(Theta3) + PWM4*k4*cosf(Theta4)));
// }

float AP_MotorsRiver::NormtoPWM(float val){
    /// Entra um valor de 0 a 1 e sai um PWM
    return val*(Pwmmax-Pwmmin) + Pwmmin;
}

void AP_MotorsRiver::FOSSEN_alocation_matrix(float FX,float FY,float TN,float &Theta1,float &Theta2,float &Theta3,float &Theta4,float &PWM1,float &PWM2,float &PWM3,float &PWM4)
{
    /// TRABALHA COM RADIANOS
    /// Fx = força no eixo X - Seu valor deve variar de -1 a 1
    /// Fy = força no eixo y - Seu valor deve variar de -1 a 1
    /// N  = tork de guinada - Seu valor deve variar de -1 a 1
    /// Função para alocar as forças do barco a partir da metodologia descrita em FOSSEN

    //Tratamento para o stick do throttle estar sempre acima da zona morta --- (Talvez tirar daqui)
    // if(RC_Channel->->get_radio_in()<channel_throttle->get_radio_min()*1.1){
    //     FX = 0.0f;
    //     FY = 0.0f;
    //     TN = 0.0f;
    // }

    FX = constrain_float(FX,-1.0f,1.0f);
    FY = constrain_float(FY,-1.0f,1.0f);
    TN = constrain_float(TN,-1.0f,1.0f);

    TN = TN * Nmax;
    FX = FX * Fmax;
    FY = FY * Fmax;

    FT = safe_sqrt(sq(TN) + sq(FX) + sq(FY));
    FT = constrain_float(FT,0.0f,Fmax);

    // Converte o valor normalizado de 0  a 1 para PWM
    PWM1 = NormtoPWM(PWM1);
    PWM2 = NormtoPWM(PWM2);
    PWM3 = NormtoPWM(PWM3);
    PWM4 = NormtoPWM(PWM4);

    // Convertendo de grau para Radianos
    Theta1 = Theta1 * DEG_TO_RAD;
    Theta2 = Theta2 * DEG_TO_RAD;
    Theta3 = Theta3 * DEG_TO_RAD;
    Theta4 = Theta4 * DEG_TO_RAD;

    if(FT<0.02*Fmax){
        // Se as forças são muito pequenas (proximas a zero) nao executa a matriz de alocação envia todos os angulos  nulos
        Theta1 = 0.0f;
        Theta2 = 0.0f;
        Theta3 = 0.0f;
        Theta4 = 0.0f;

        //Envia todos os PWMs muito pequenos (Nulos-Na prática) Os valores aqui, não estão normalizados entre 0 e 1
        PWM1 = NormtoPWM(0.0f);
        PWM2 = NormtoPWM(0.0f);
        PWM3 = NormtoPWM(0.0f);
        PWM4 = NormtoPWM(0.0f);

    }else{
        // ========================================== PWM calculado a partir da força e dos angulos ====================================
        PWM1 = (safe_sqrt(sq(FX/(4*k1) - (Ly*TN)/(4*k1*(sq(Lx) + sq(Ly)))) + sq(FY/(4*k1) + (Lx*TN)/(4*k1*(sq(Lx) + sq(Ly))))));
        PWM2 = (safe_sqrt(sq(FX/(4*k2) + (Ly*TN)/(4*k2*(sq(Lx) + sq(Ly)))) + sq(FY/(4*k2) - (Lx*TN)/(4*k2*(sq(Lx) + sq(Ly))))));
        PWM3 = (safe_sqrt(sq(FX/(4*k3) + (Ly*TN)/(4*k3*(sq(Lx) + sq(Ly)))) + sq(FY/(4*k3) + (Lx*TN)/(4*k3*(sq(Lx) + sq(Ly))))));
        PWM4 = (safe_sqrt(sq(FX/(4*k4) - (Ly*TN)/(4*k4*(sq(Lx) + sq(Ly)))) + sq(FY/(4*k4) - (Lx*TN)/(4*k4*(sq(Lx) + sq(Ly))))));

        // Saturação
        PWM1 = constrain_float(PWM1,Pwmmin,Pwmmax);
        PWM2 = constrain_float(PWM2,Pwmmin,Pwmmax);
        PWM3 = constrain_float(PWM3,Pwmmin,Pwmmax);
        PWM4 = constrain_float(PWM4,Pwmmin,Pwmmax);

        // =============================== Arco seno do angulo calculado a partir da força e do novo PWM ===============================
        Theta1 = atan2f((FY/(4*k1) + (Lx*TN)/(4*k1*(sq(Lx) + sq(Ly)))),(FX/(4*k1) - (Ly*TN)/(4*k1*(sq(Lx) + sq(Ly)))));
        Theta2 = atan2f((FY/(4*k2) - (Lx*TN)/(4*k2*(sq(Lx) + sq(Ly)))),(FX/(4*k2) + (Ly*TN)/(4*k2*(sq(Lx) + sq(Ly)))));
        Theta3 = atan2f((FY/(4*k3) + (Lx*TN)/(4*k3*(sq(Lx) + sq(Ly)))),(FX/(4*k3) + (Ly*TN)/(4*k3*(sq(Lx) + sq(Ly)))));
        Theta4 = atan2f((FY/(4*k4) - (Lx*TN)/(4*k4*(sq(Lx) + sq(Ly)))),(FX/(4*k4) - (Ly*TN)/(4*k4*(sq(Lx) + sq(Ly)))));

        // Saturação
        Theta1 = constrain_float(Theta1,-M_PI,M_PI);
        Theta2 = constrain_float(Theta2,-M_PI,M_PI);
        Theta3 = constrain_float(Theta3,-M_PI,M_PI);
        Theta4 = constrain_float(Theta4,-M_PI,M_PI);
    }

    // Allocacao_Direta(Theta1, Theta2, Theta3, Theta4, PWM1, PWM2, PWM3, PWM4);

    // Normaliza o valor de PWM encontrado entre 0 e 1 para ativar a saida entre mínima e maxima potência
    PWM1 = PWMtoNorm(PWM1);
    PWM2 = PWMtoNorm(PWM2);
    PWM3 = PWMtoNorm(PWM3);
    PWM4 = PWMtoNorm(PWM4);

    // Conveter o valor de Theta para Graus
    Theta1 = Theta1 * RAD_TO_DEG;
    Theta2 = Theta2 * RAD_TO_DEG;
    Theta3 = Theta3 * RAD_TO_DEG;
    Theta4 = Theta4 * RAD_TO_DEG;
}

/* ****************************** Mathaus *********************************
***************************************************************************/


// check for failed motor
//   should be run immediately after output_armed_stabilizing
//   first argument is the sum of:
//      a) throttle_thrust_best_rpy : throttle level (from 0 to 1) providing maximum roll, pitch and yaw range without climbing
//      b) thr_adj: the difference between the pilot's desired throttle and throttle_thrust_best_rpy
//   records filtered motor output values in _thrust_rpyt_out_filt array
//   sets thrust_balanced to true if motors are balanced, false if a motor failure is detected
//   sets _motor_lost_index to index of failed motor
void AP_MotorsRiver::check_for_failed_motor(float throttle_thrust_best_plus_adj)
{
    // record filtered and scaled thrust output for motor loss monitoring purposes
    float alpha = 1.0f / (1.0f + _loop_rate * 0.5f);
    for (uint8_t i = 0; i < AP_MOTORS_MAX_NUM_MOTORS; i++)
    {
        if (motor_enabled[i])
        {
            _thrust_rpyt_out_filt[i] += alpha * (_thrust_rpyt_out[i] - _thrust_rpyt_out_filt[i]);
        }
    }

    float rpyt_high = 0.0f;
    float rpyt_sum = 0.0f;
    uint8_t number_motors = 0.0f;
    for (uint8_t i = 0; i < AP_MOTORS_MAX_NUM_MOTORS; i++)
    {
        if (motor_enabled[i])
        {
            number_motors += 1;
            rpyt_sum += _thrust_rpyt_out_filt[i];
            // record highest filtered thrust command
            if (_thrust_rpyt_out_filt[i] > rpyt_high)
            {
                rpyt_high = _thrust_rpyt_out_filt[i];
                // hold motor lost index constant while thrust boost is active
                if (!_thrust_boost)
                {
                    _motor_lost_index = i;
                }
            }
        }
    }

    float thrust_balance = 1.0f;
    if (rpyt_sum > 0.1f)
    {
        thrust_balance = rpyt_high * number_motors / rpyt_sum;
    }
    // ensure thrust balance does not activate for multirotors with less than 6 motors
    if (number_motors >= 6 && thrust_balance >= 1.5f && _thrust_balanced)
    {
        _thrust_balanced = false;
    }
    if (thrust_balance <= 1.25f && !_thrust_balanced)
    {
        _thrust_balanced = true;
    }

    // check to see if thrust boost is using more throttle than _throttle_thrust_max
    if ((_throttle_thrust_max * get_compensation_gain() > throttle_thrust_best_plus_adj) && (rpyt_high < 0.9f) && _thrust_balanced)
    {
        _thrust_boost = false;
    }
}

// output_test_seq - spin a motor at the pwm value specified
//  motor_seq is the motor's sequence number from 1 to the number of motors on the frame
//  pwm value is an actual pwm value that will be output, normally in the range of 1000 ~ 2000
void AP_MotorsRiver::output_test_seq(uint8_t motor_seq, int16_t pwm)
{
    // exit immediately if not armed
    if (!armed())
    {
        return;
    }

    // loop through all the possible orders spinning any motors that match that description
    for (uint8_t i = 0; i < AP_MOTORS_MAX_NUM_MOTORS; i++)
    {
        if (motor_enabled[i] && _test_order[i] == motor_seq)
        {
            // turn on this motor
            rc_write(i, pwm);
        }
    }
}

// output_test_num - spin a motor connected to the specified output channel
//  (should only be performed during testing)
//  If a motor output channel is remapped, the mapped channel is used.
//  Returns true if motor output is set, false otherwise
//  pwm value is an actual pwm value that will be output, normally in the range of 1000 ~ 2000
bool AP_MotorsRiver::output_test_num(uint8_t output_channel, int16_t pwm)
{
    if (!armed())
    {
        return false;
    }

    // Is channel in supported range?
    if (output_channel > AP_MOTORS_MAX_NUM_MOTORS - 1)
    {
        return false;
    }

    // Is motor enabled?
    if (!motor_enabled[output_channel])
    {
        return false;
    }

    rc_write(output_channel, pwm); // output
    return true;
}

// add_motor
void AP_MotorsRiver::add_motor_raw(int8_t motor_num, float roll_fac, float pitch_fac, float yaw_fac, uint8_t testing_order)
{
    // ensure valid motor number is provided
    if (motor_num >= 0 && motor_num < AP_MOTORS_MAX_NUM_MOTORS)
    {

        // increment number of motors if this motor is being newly motor_enabled
        if (!motor_enabled[motor_num])
        {
            motor_enabled[motor_num] = true;
        }

        // set roll, pitch, thottle factors and opposite motor (for stability patch)
        _roll_factor[motor_num] = roll_fac;
        _pitch_factor[motor_num] = pitch_fac;
        _yaw_factor[motor_num] = yaw_fac;

        // set order that motor appears in test
        _test_order[motor_num] = testing_order;

        // call parent class method
        add_motor_num(motor_num);
    }
}

// add_motor using just position and prop direction - assumes that for each motor, roll and pitch factors are equal
void AP_MotorsRiver::add_motor(int8_t motor_num, float angle_degrees, float yaw_factor, uint8_t testing_order)
{
    add_motor(motor_num, angle_degrees, angle_degrees, yaw_factor, testing_order);
}

// add_motor using position and prop direction. Roll and Pitch factors can differ (for asymmetrical frames)
void AP_MotorsRiver::add_motor(int8_t motor_num, float roll_factor_in_degrees, float pitch_factor_in_degrees, float yaw_factor, uint8_t testing_order)
{
    add_motor_raw(
        motor_num,
        cosf(radians(roll_factor_in_degrees + 90)),
        cosf(radians(pitch_factor_in_degrees)),
        yaw_factor,
        testing_order);
}

// remove_motor - disabled motor and clears all roll, pitch, throttle factors for this motor
void AP_MotorsRiver::remove_motor(int8_t motor_num)
{
    // ensure valid motor number is provided
    if (motor_num >= 0 && motor_num < AP_MOTORS_MAX_NUM_MOTORS)
    {
        // disable the motor, set all factors to zero
        motor_enabled[motor_num] = false;
        _roll_factor[motor_num] = 0;
        _pitch_factor[motor_num] = 0;
        _yaw_factor[motor_num] = 0;
    }
}

void AP_MotorsRiver::setup_motors(motor_frame_class frame_class, motor_frame_type frame_type)
{
    // remove existing motors
    for (int8_t i = 0; i < AP_MOTORS_MAX_NUM_MOTORS; i++)
    {
        remove_motor(i);
    }

    bool success = true;

    switch (frame_class)
    {
    case MOTOR_FRAME_QUAD:
        switch (frame_type)
        {
        case MOTOR_FRAME_TYPE_X:
            // add_motor(AP_MOTORS_MOT_1, 45, AP_MOTORS_MATRIX_YAW_FACTOR_CCW, 1);
            add_motor(AP_MOTORS_MOT_1, 45, 0, 1);
            add_motor(AP_MOTORS_MOT_2, -135, 0, 3);
            add_motor(AP_MOTORS_MOT_3, -45, 0, 4);
            add_motor(AP_MOTORS_MOT_4, 135, 0, 2);
            break;

        default:
            // quad frame class does not support this frame type
            success = false;
            break;
        }
        break; // quad
    default:
        // quad frame class does not support this frame type
        success = false;
        break;

    } // switch frame_class

    // normalise factors to magnitude 0.5
    normalise_rpy_factors();

    _flags.initialised_ok = success;
}

// normalizes the roll, pitch and yaw factors so maximum magnitude is 0.5
void AP_MotorsRiver::normalise_rpy_factors()
{
    float roll_fac = 0.0f;
    float pitch_fac = 0.0f;
    float yaw_fac = 0.0f;

    // find maximum roll, pitch and yaw factors
    for (uint8_t i = 0; i < AP_MOTORS_MAX_NUM_MOTORS; i++)
    {
        if (motor_enabled[i])
        {
            if (roll_fac < fabsf(_roll_factor[i]))
            {
                roll_fac = fabsf(_roll_factor[i]);
            }
            if (pitch_fac < fabsf(_pitch_factor[i]))
            {
                pitch_fac = fabsf(_pitch_factor[i]);
            }
            if (yaw_fac < fabsf(_yaw_factor[i]))
            {
                yaw_fac = fabsf(_yaw_factor[i]);
            }
        }
    }

    // scale factors back to -0.5 to +0.5 for each axis
    for (uint8_t i = 0; i < AP_MOTORS_MAX_NUM_MOTORS; i++)
    {
        if (motor_enabled[i])
        {
            if (!is_zero(roll_fac))
            {
                _roll_factor[i] = 0.5f * _roll_factor[i] / roll_fac;
            }
            if (!is_zero(pitch_fac))
            {
                _pitch_factor[i] = 0.5f * _pitch_factor[i] / pitch_fac;
            }
            if (!is_zero(yaw_fac))
            {
                _yaw_factor[i] = 0.5f * _yaw_factor[i] / yaw_fac;
            }
        }
    }
}

/*
  call vehicle supplied thrust compensation if set. This allows
  vehicle code to compensate for vehicle specific motor arrangements
  such as tiltrotors or tiltwings
*/
void AP_MotorsRiver::thrust_compensation(void)
{
    if (_thrust_compensation_callback)
    {
        _thrust_compensation_callback(_thrust_rpyt_out, AP_MOTORS_MAX_NUM_MOTORS);
    }
}
