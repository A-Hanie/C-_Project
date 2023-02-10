/****************************************************************************
* Title                 :   MobileManipulator
* Filename              :   MobileManipulator.h
* Author                :   Ahmed Hanie
* Origin Date           :   8-2-2023
* Version               :   1.0.0
* Compiler              :   gcc 9.4.0
* Target                :   TBD
*******************************************************************************/
/** @file: MobileManipulator.h
 *  @brief: The interface definition for the MobileManipulator Class
 *  @name: MobileManipulator
 *  @variables: range, weight, Location(class E)
 *  @methods: navigate, move, pickObject, display (to display all the data)
 */
/******************************************************************************
* Includes
*******************************************************************************/
#include <iostream>
#include "utilities.h"
#include "Robot.h"
#include "Manipulator.h"
#include "MobileRobot.h"

using namespace std;

/******************************************************************************
* Macros
*******************************************************************************/


/******************************************************************************
* Typedefs
*******************************************************************************/
class MobileManipulator : public MobileRobot, public Manipulator
{
protected:
    /* data */
    double range, weight;
    Location mobileManipulator_Loc;

public:

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief default Constructor to create a new Mobile Manipulator object
     *
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    MobileManipulator();
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief Construct a copy of Mobile Manipulator object
     *
     * @param Mobile Manipulator object
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    MobileManipulator(MobileManipulator &copy);

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief non-default Constructor to create a new Mobile Manipulator object
     *
     * @param robotName --> options: jakal, turtleBot3, turtleBot2
     * @param type --> options: Burger, Waffle, Waffle_Pi
     * @param weight double value
     * @param length double
     * @param width double
     * @param number_of_wheel unsigned int
     * @param payload unsigned int
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

    MobileManipulator(robotName_t robotName, turtleBotModel_t type, Camera_t camera, Lidar_t lidar, int no_of_sensors, double weight, double length, double width,
                      int number_of_wheel, int payload, int workspace_size, double maxReach,
                      int list_of_end_effectors, double velocity, double acceleration);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief Destroy the Mobile Manipulator object
     *
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    ~MobileManipulator();
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief
     *
     * @param _x_meter
     * @param _x_cm
     * @param _y_meter
     * @param _y_cm
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    void navigate(int _x_meter, int _x_cm, int _y_meter, int _y_cm);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief function used to drive the robot
     *
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    void move();
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief function to pick an object
     *
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    void pickObject();
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief used to display all robot info
     *
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    void display();


};
/****************************** End of File ***********************************/