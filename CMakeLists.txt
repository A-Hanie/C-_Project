cmake_minimum_required (VERSION 3.8)
project(ROBOT)


add_executable(robot main.cpp
               src/Location.cpp
               src/Manipulator.cpp
               src/MobileManipulator.cpp
               src/MobileRobot.cpp
               src/Robot.cpp
               src/utilities.cpp
               )
target_include_directories(robot PUBLIC include/)


