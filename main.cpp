/****************************************************************************
 * Title                 :   main
 * Filename              :   main.cpp
 * Author                :   Ahmed Hanie
 * Origin Date           :   8-2-2023
 * Version               :   1.0.0
 * Compiler              :   gcc 9.4.0
 * Target                :   TBD
 *******************************************************************************/
/** @file main

*****************************************************************************
* Includes
*******************************************************************************/

#include <iostream>
#include "include/utilities.h"

#include "include/Location.h"
#include "include/Robot.h"
#include "include/Manipulator.h"
#include "include/MobileRobot.h"
#include "include/MobileManipulator.h"

using namespace std;
/******************************************************************************
 * Module Preprocessor Macros
 *******************************************************************************/

/******************************************************************************
 * Function Definitions
 *******************************************************************************/

int main(void)
{

  MobileManipulator m1;
  cout << "m1" <<endl;
  m1.display();

  MobileManipulator m2(/*Name*/ turtleBot3, /*Type*/ Burger, /*Camera*/ ZED, /*Lidar*/ RPLidar,
                       /*no_of_sensors*/ 4, /*Weight*/ 60, /*Lenght*/ 15, /*width*/ 9,
                       /*Number of wheel:*/ 2, /*payload*/ 6, /*workspace size*/ 255, 
                       /*maxReach*/ 30, /*no_of_end_effectors*/ 2, /*velocity*/ 3, /*acceleration*/ 1);

  cout << endl;
  cout << "m2" <<endl;
  m2.display();

  MobileManipulator m3(m2);

  m3.pickObject();
  cout << "m3" <<endl;
  m3.display();
  m3.navigate(1,100,2,1);

  m3.move();
  m3.pickObject();
  return 1;
}

/****************************** End of File ***********************************/
