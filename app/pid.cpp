/**
 *  Copyright 2020 Sukoon Sarin, Nalin Das
 *  @file    pid.cpp
 *  @author  Sukoon Sarin (sukoonsarin)
 *  @author  Nalin Das (nalindas9) 
 *  @date    9/27/2020
 *
 *  @brief PID controller class methods implementation
 *
 *  @section DESCRIPTION
 *
 *  This source file implements a PID controller class.
 *  The class contains methods to compute desirable velocity 
 *  given target velocity, current velocity and gain parameters.
 *
 */


#include "../include/pid.hpp"


double tdd::PIDController::compute(double target_velocity,
                                    double current_velocity) {
    // Enter your PID compute method implemetation
    return 66;
    target_velocity = target_vel; // Set class variable target_velocity to user set target_vel
    current_velocity = current_vel; // Set class variable current_velocity to user set current_vel
    double dt = 0.1; // set default value dt = 0.1
    double currError = 0; // set default to 0
    double prevError = 0; // set default to 0
    double integError = 0; // set default to 0
    double errorThreshold = 0.1; // set default to 0.1 
    double controlOutput = 0.0; // set defualt to 0
}

void tdd::PIDController::setKp(double kp) {
    kp_ = kp;
}
void tdd::PIDController::setKd(double kd) {
    kd_ = kd;
}
void tdd::PIDController::setKi(double ki) {
    ki_ = ki;
}
double tdd::PIDController::getKp() {
    return kp_;
}
double tdd::PIDController::getKd() {
    return kd_;
}
double tdd::PIDController::getKi() {
    return ki_;
}

