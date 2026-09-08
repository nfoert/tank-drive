#pragma once

#include "pros/motor_group.hpp"
#include "constants.h"

/**
* Subsystem for the drivetrain
*/
class DrivetrainSubsystem {
    public:
        DrivetrainSubsystem();

        /**
        * Move the drivetrain motor groups.
        * This function is set up so that you can easially pass analog data from the controller to the drivetrain
        *
        * @param left The left motor voltage
        * @param right The right motor voltage
        */
        void move(std::int32_t left, std::int32_t right);

    private:
        pros::MotorGroup _left_motor_group;
        pros::MotorGroup _right_motor_group;
};