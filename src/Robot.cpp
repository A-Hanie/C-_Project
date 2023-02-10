/****************************************************************************
 * Title                 :   Robot
 * Filename              :   Robot.cpp
 * Author                :   Ahmed Hanie
 * Origin Date           :   8-2-2023
 * Version               :   1.0.0
 * Compiler              :   gcc 9.4.0
 * Target                :   TBD
 *******************************************************************************/
/** @file Robot.cpp
 *  @brief The implementation for the Robot class
 *  @name: Robot
 *  @variables: name, type weight, length, width, velocity, acceleration
 *  @methods: getVelocity, getAcceleration
 */
/******************************************************************************
 * Includes
 *******************************************************************************/
#include <iostream>
#include "../include/Robot.h"
#include "../include/utilities.h"

/* This is an Abstracr Class so there is no Implementation */

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief: default Constructor to create a new Robot object
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

Robot::Robot()
{
    this->name = jakal;
    this->type = Burger;
    this->weight = 0;
    this->length = 0;
    this->width = 0;
    this->velocity = 0;
    this->acceleration = 0;

#if DEBUG == true
    green();
    cout << endl
         << "Entered default of robot constructor" << endl;
    reset();
#endif
}

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
Robot::Robot(robotName_t name,
             turtleBotModel_t type,
             double weight,
             double length,
             double width, double velocity,
             double acceleration)
{

    this->name = name;
    this->type = type;
    this->weight = weight;
    this->length = length;
    this->width = width;
    this->velocity = velocity;
    this->acceleration = acceleration;

#if DEBUG == true
    green();
    cout<< endl  << "non-default robot constructor"<< endl ;
    reset();
#endif
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief Construct a new Robot object from copied one
 *
 * @param Robot object to be copied
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
Robot::Robot(Robot &copy)
{
    this->name = copy.name;
    this->type = copy.type;
    this->weight = copy.weight;
    this->length = copy.length;
    this->width = copy.width;
    this->velocity = copy.velocity;
    this->acceleration = copy.acceleration;

}
Robot::~Robot()
{
#if DEBUG == true
    red();
    cout << endl
         << "Destructor of robot object" << endl;
    reset();
#endif
}

/****************************** End of File ***********************************/
