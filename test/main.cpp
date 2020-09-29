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
 *  Main file that runs all tests
 *
 */
#include <gtest/gtest.h>

/**
 *  @brief Main function for test.cpp
 *  @param argc Argument count
 *  @param argv Argument vector
 *  @return Exit code 1 or 0
 */
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
 
