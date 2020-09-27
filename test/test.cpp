#include <gtest/gtest.h>
#include "../include/pid.hpp"

TEST(PIDControllerTest, classInitialization) {
  tdd::PIDController dummyPIDController(0.2, 0.4, 0.02);
  EXPECT_EQ(0.2, dummyPIDController.getKp());
  EXPECT_EQ(0.4, dummyPIDController.getKi());
  EXPECT_EQ(0.02, dummyPIDController.getKd());
}

TEST(PIDControllerTest, computeNewVelocity) {
  tdd::PIDController dummyPIDController(0.2, 0.4, 0.02);
  double target_velocity = 70, current_velocity = 30;
  EXPECT_NEAR(68, dummyPIDController.compute(target_velocity, current_velocity), 2);
}

TEST(PIDControllerTest, setParamters) {
  tdd::PIDController dummyPIDController(0.2, 0.4, 0.02);
  dummyPIDController.setKp(0.7);
  dummyPIDController.setKi(0.5);
  dummyPIDController.setKd(0.06);
  EXPECT_EQ(0.7, dummyPIDController.getKp());
  EXPECT_EQ(0.5, dummyPIDController.getKi());
  EXPECT_EQ(0.06, dummyPIDController.getKd());
}

TEST(PIDControllerTest, getParamters) {
  tdd::PIDController dummyPIDController(0.5, 0.3, 0.2);

  EXPECT_EQ(0.5, dummyPIDController.getKp());
  EXPECT_EQ(0.3, dummyPIDController.getKi());
  EXPECT_EQ(0.2, dummyPIDController.getKd());
}

