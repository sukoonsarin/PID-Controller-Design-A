#include "../include/pid.hpp"


double tdd::PIDController::compute(double target_velocity, double current_velocity)
{
    return 30;
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

