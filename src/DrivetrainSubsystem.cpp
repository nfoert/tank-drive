#include "DrivetrainSubsystem.h"

DrivetrainSubsystem::DrivetrainSubsystem() :
    _left_motor_group(DrivetrainConstants::LEFT_DRIVETRAIN_PORTS),
    _right_motor_group(DrivetrainConstants::RIGHT_DRIVETRAIN_PORTS)
    {

}

void DrivetrainSubsystem::move(std::int32_t left, std::int32_t right) {
    _left_motor_group.move(left);
    _right_motor_group.move(right);
}