#include <iostream>
#include "../include/pid.hpp"

int main()
{
    double target_vel = 0, current_vel = 0, new_current_velocity = 0.;
    std::cout << "Enter the desired velocity: ";
    std::cin >> target_vel;
    std::cout << "Enter the current velocity: ";
    std::cin >> current_vel;
    tdd::PIDController controller(0.2, 0.4, 0.02);
    new_current_velocity = controller.compute(target_vel, current_vel);
    std::cout << "The new velocity is: " << new_current_velocity << std::endl;;

    return 0;
}
