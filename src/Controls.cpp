
#include "Controls.h"
#include <cstdint>

DriverInterface::DriverInterface() :
    _controller(pros::E_CONTROLLER_MASTER)
    {

};

std::int32_t DriverInterface::GetLeft() {
    return _controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
};

std::int32_t DriverInterface::GetRight() {
    return _controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
};