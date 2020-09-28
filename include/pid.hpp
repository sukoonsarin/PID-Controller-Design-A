/**
 *  Copyright 2020 Sukoon Sarin, Nalin Das
 *  @file    pid.hpp
 *  @author  Sukoon Sarin (sukoonsarin)
 *  @author  Nalin Das (nalindas9) 
 *  @date    9/27/2020
 *
 *  @brief PID controller class implementation
 *
 *  @section DESCRIPTION
 *
 *  Source header file for PID controller class.
 *
 */
#pragma once

namespace tdd {
/** 
 * @brief PID controller class
 * **/
class PIDController{
 private:
    double kp_, ki_, kd_;           // Gains: proportional, integral, derivative
    double target_velocity;         // Desired velocity
    double current_velocity;        // Current velocity
    double error_threshold;         // Error threshold

 public:
    /**    
     * @brief Sets tho propotional gain
     * @param kp Propotional gain
     * **/
    void setKp(double);
    /** 
     * @brief Sets tho integral gain
     * @param ki Integral gain
     * **/
    void setKi(double);
    /** 
     * @brief Sets tho derivative gain
     * @param kd derivative gain
     * **/
    void setKd(double);
    /** 
     * @brief Gets tho propotional gain
     * @return Proportional gain of PID
     * **/
    double getKp();
    /** 
     * @brief Gets tho integral gain
     * @return Integral gain of PID
     * **/
    double getKi();
    /** 
     * @brief Gets tho derivative gain
     * @return derivative gain of PID
     * **/
    double getKd();
    /**
     * @brief calculate new velocity using target velocity
     *        and current velocity
     * @param target_velocity target velocity
     * @param current_velocity current velocity
     * @return new velocity
     * **/
    double compute(double, double);

    /**
     * @brief Default constructor
     * **/
    PIDController();

    /**
     * @brief Constructor with initial values
     * @param kp proportional gain
     * @param ki integral gain
     * @param kd differential gain
     * **/
    PIDController(double kp, double ki, double kd) {
        kp_ = kp;
        ki_ = ki;
        kd_ = kd;
    }

    // PID Destructor
    ~PIDController(){}
};
}  // namespace tdd
