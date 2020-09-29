/**
 *  Copyright 2020 Sukoon Sarin, Nalin Das
 *  @file main.cpp
 *  @author Sukoon Sarin (sukoonsarin)
 *  @author Nalin Das (nalindas9) 
 *  @date 9/27/2020
 *
 *  @brief Main file 
 *
 *  @section DESCRIPTION
 *
 *  Source main file for PID controller.
 *
 */
#include <iostream>
#include "../include/pid.hpp"

/**
 * @brief Main function
 * @return 0
 * **/
int main() {
    // Intialize target, current and new current velocity
    double target_vel = 0, current_vel = 0;
    // Take target and current velocity from user as input
    std::cout << "Enter the desired velocity: ";
    std::cin >> target_vel;
    std::cout << "Enter the current velocity: ";
    std::cin >> current_vel;
    // Create PIDController class object
    tdd::PIDController controller(0.2, 0.4, 0.02);
    // Compute the new current velocity using target and current velocity
    double new_current_velocity = controller.compute(target_vel, current_vel);
    std::cout << "The new velocity is: " << new_current_velocity << std::endl;;

    return 0;
}
