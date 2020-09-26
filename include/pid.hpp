#pragma once

namespace tdd {
    class PIDController{
        private:
            double kp, ki, kd;
            double target_velocity;
            double current_velocity;
            double error_threshold;
        public:
            double computeError();
            double computeVelocity();
                    
    }
}; //namespace