#pragma once

#include "pros/misc.h"
#include "pros/misc.hpp"
#include <cstdint>

/** 
* The driver controller class
*/
class DriverInterface {
    public:
        DriverInterface();

        /**
        * Get the left tank drive throttle
        */
        std::int32_t GetLeft();

        /**
        * Get the right tank drive throttle
        */
        std::int32_t GetRight();

    private:
        pros::Controller _controller;
};