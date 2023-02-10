/****************************************************************************
 * Title                 :   Robot
 * Filename              :   Robot.h
 * Author                :   Ahmed Hanie
 * Origin Date           :   8-2-2023
 * Version               :   1.0.0
 * Compiler              :   gcc 9.4.0
 * Target                :   TBD
 *******************************************************************************/
/** @file: Robot.h
 *  @brief: The interface definition for the Abstract Robot Class
 *  @name: Robot
 *  @variables: name, type weight, length, width, velocity, acceleration
 *  @methods: getVelocity, getAcceleration
 * *******************************************************************************/
#ifndef ROBOT
#define ROBOT

/******************************************************************************
 * Includes
 *******************************************************************************/
#include <iostream>
#include "utilities.h"
using namespace std;

/******************************************************************************
 * Typedefs
 *******************************************************************************/

typedef enum{
    jakal,
    turtleBot3,
    turtleBot2
}robotName_t;

typedef enum{
    Burger,
    Waffle,
    Waffle_Pi
}turtleBotModel_t;

/******************************************************************************
 * Classes
 *******************************************************************************/

class Robot
{
public:
    robotName_t name;
    turtleBotModel_t type;
    double weight;
    double length;
    double width;
    double velocity;
    double acceleration;

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief: default Constructor to create a new Robot object
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    Robot();
 
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @fn: Robot(string name,nt type,double weight,double length,double width,
     *      double velocity,double acceleration);
     * @brief 1st non-default.. to create a new Robot object
     * @param: name
     * @param: type
     * @param: weight
     * @param: length
     * @param: width
     * @param: velocity
     * @param: acceleration
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    Robot(robotName_t name,
          turtleBotModel_t type,
          double weight,
          double length,
          double width, double velocity,
          double acceleration);

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief Construct a new Robot object from copied one
     *
     * @param Robot object to be copied
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    Robot(Robot &copy);

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     *  @fn: virtual double getVelocity() = 0;
     *  @brief: Pure virtual function to Get the object Velocity
     *  @return: double value of Velocity
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    virtual double getVelocity() = 0;

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @fn:  virtual double getAcceleration() = 0;
     * @brief: Pure virtual function to Get the object Acceleration
     * @return: double value of Acceleration
     *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    virtual double getAcceleration() = 0;

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief: Destroy the Robot object
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    ~Robot();
};

#endif
/****************************** End of File ***********************************/