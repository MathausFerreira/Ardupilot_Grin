#include "Copter.h"

#include <GCS_MAVLink/GCS.h>
/*
 * Init and run calls for stabilize flight mode
 */

// stabilize_run - runs the main stabilize controller
// should be called at 100hz or more
int counter = 0;
void ModeStabilize::run()
{
    // apply simple mode transform to pilot inputs
    update_simple_mode();

    // convert pilot input to lean angles
    float fy, fx, tn;
    get_pilot_desired_forces(fx, fy, tn);

    // get pilot's desired yaw rate
    // float target_yaw_rate = get_pilot_desired_yaw_rate(channel_yaw->get_control_in());

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
    attitude_control->output_to_boat(fx*get_gain(), fy*get_gain(), tn*get_gain());

     counter++;
    if (counter > 50){
        counter = 0;
        // gcs().send_text(MAV_SEVERITY_CRITICAL, "_pitch_in:  %5.3f, _roll_in:  %5.3f, _yaw_in:  %5.3f,", _pitch_in, _roll_in, _yaw_in);
        gcs().send_text(MAV_SEVERITY_CRITICAL, "fxfytn:  %5.3f,   %5.3f,  %5.3f", fx, fy, tn);
    }
            // Mathaus 
   

    // output pilot's throttle
    attitude_control->set_throttle_out(get_pilot_desired_throttle(),true, g.throttle_filt);

}
