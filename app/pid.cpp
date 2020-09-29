#include "../include/pid.hpp"
#include <iostream>
#include <cmath>

double tdd::PIDController::compute(double target_vel, double current_vel)
{   
    target_velocity = target_vel;
    current_velocity = current_vel;
    double dt = 0.1;
    double currError = 0;
    double prevError = 0;
    double integError = 0;
    double errorThreshold = 0.1;
    std::cout << std::abs(23.3) << std::endl;
    while(std::abs(target_velocity - current_vel) >= std::abs(errorThreshold)){
        currError = target_velocity - current_vel;
        integError+= currError*dt;
        current_vel = kp_*currError + ki_*integError + (kd_*(currError - prevError))/dt;
        prevError = currError;
    }
    return current_vel;
}
void tdd::PIDController::setKp(double kp)
{
    kp_ = kp;
}
void tdd::PIDController::setKd(double kd)
{
    kd_ = kd;
}
void tdd::PIDController::setKi(double ki)
{
    ki_ = ki;
}
double tdd::PIDController::getKp()
{
    return kp_;
}
double tdd::PIDController::getKd()
{
    return kd_;
}
double tdd::PIDController::getKi()
{
    return ki_;
}

