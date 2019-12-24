cmake_minimum_required(VERSION 3.4)
project(differential_robot)

set(CMAKE_CXX_STANDARD 11)

# all include libraries
include_directories(include)

# Robot library
add_library(sim_robot_lib SHARED include/Odometry src/Odometry.c
                        include/Position.h src/Position.c
                        include/UnitTests.h src/UnitTests.c)

# Lab 3: using the robot class
# Lab 4: sensors on robot
add_executable(sim_robot src/main.c)
target_link_libraries(sim_robot sim_robot_lib m)