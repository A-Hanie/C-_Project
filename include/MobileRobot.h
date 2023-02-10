/****************************************************************************
 * Title                 :   MobileRobot
 * Filename              :   MobileRobot.h
 * Author                :   Ahmed Hanie
 * Origin Date           :   8-2-2023
 * Version               :   1.0.0
 * Compiler              :   gcc 9.4.0
 * Target                :   TBD
 *******************************************************************************/
/** @file: MobileRobot.h
 *  @brief: The interface definition for the MobileRobot Class
 *  @name: MobileRobot
 *  @variables: numberOfWheels, list of sensors, cameraType, LidarType
 *  @methods:  getNumberOfWheels, getNumberOfSensors, move
 ****************************************************************************/
#ifndef MOBILE_ROBOT
#define MOBILE_ROBOT
/******************************************************************************
 * Includes
 *******************************************************************************/
#include <iostream>
#include "Robot.h"
#include "utilities.h"

using namespace std;
/******************************************************************************
 * Macros
 *******************************************************************************/

/******************************************************************************
 * Typedefs
 *******************************************************************************/
typedef enum
{
    pi_CAM,
    _5MP,
    ZED,
    RealSense,

} Camera_t;

typedef enum
{
    RPLidar,
    YDLidar,
    HOKUYO

} Lidar_t;

/******************************************************************************
 * Classes
 *******************************************************************************/

class MobileRobot : virtual public Robot
{
protected:
    /* data */

public:
    unsigned int numberOfWheels;
    int no_of_sensors;
    Camera_t cameraType;
    Lidar_t LidarType;
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief default Constructor to create a new Mobile Robot object
     *
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    MobileRobot();

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief Construct a new Mobile Robot object
     *
     * @param numberOfWheels
     * @param no_of_sensors
     * @param cameraType       options: pi_CAM, 5MP, ZED, RealSense
     * @param LidarType        options: RPLidar, YDLidar, HOKUYO
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    MobileRobot(int numberOfWheels,
                int no_of_sensors,
                Camera_t cameraType,
                Lidar_t LidarType);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief Construct a a copy of Mobile Robot object
     *
     * @param MobileRobot object to be copied
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    MobileRobot(MobileRobot &copy);

    ~MobileRobot();

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief Get the Number Of Wheels object
     *
     * @return unsigned int number of wheels
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    unsigned int getNumberOfWheels();
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief Get the Number Of Sensors object
     *
     * @return unsigned int number of sensors
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    unsigned int getNumberOfSensors();

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief move function used to move the robot and print out the the
     *          in moving state
     *
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    void move();

    /*******************************************************************************
     * @brief Get the Velocity object
     *
     * @return double
     *******************************************************************************/
    virtual double  getVelocity();
    /*******************************************************************************
     * @brief return Acceleration of the robot
     *
     * @return double
     *******************************************************************************/
    virtual double getAcceleration();
};


#endif /*MOBILE_ROBOT*/
/****************************** End of File ***********************************/