/****************************************************************************
 * Title                 :   MobileRobot
 * Filename              :   MobileRobot.cpp
 * Author                :   Ahmed Hanie
 * Origin Date           :   8-2-2023
 * Version               :   1.0.0
 * Compiler              :   gcc 9.4.0
 * Target                :   TBD
 *******************************************************************************/
/** @file MobileRobot.cpp
 *  @brief The implementation for the MobileRobot class
 *  @name: MobileRobot
 *  @variables: numberOfWheels, list of sensors, cameraType, LidarType
 *  @methods:  getNumberOfWheels, getNumberOfSensors, move
*****************************************************************************
* Includes
*******************************************************************************/

#include "../include/MobileRobot.h"
#include "../include/utilities.h"

/******************************************************************************
 * Function Definitions
 *******************************************************************************/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief default Constructor to create a new Mobile Robot object
 *
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
MobileRobot::MobileRobot() : numberOfWheels(2), no_of_sensors(4), cameraType(RealSense), LidarType(HOKUYO)
{
#if DEBUG == true
    green();
    cout<<"[*] Entered default constructor of MobileRobot object"<<endl;
#endif
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief Construct a new Mobile Robot object
 *
 * @param numberOfWheels
 * @param no_of_sensors
 * @param cameraType       options: pi_CAM, 5MP, ZED, RealSense
 * @param LidarType        options: RPLidar, YDLidar, HOKUYO
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
MobileRobot::MobileRobot(int numberOfWheels,
                          int no_of_sensors,
                          Camera_t cameraType,
                          Lidar_t LidarType)
{
    this->numberOfWheels = numberOfWheels;
    this->no_of_sensors = no_of_sensors;
    this->cameraType = cameraType;
    this->LidarType = LidarType;

#if DEBUG == true
    green();
    cout << "[*] Entered custom non-default constructor of MobileRobot object " << endl;
#endif
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief Construct a a copy of Mobile Robot object
 *
 * @param MobileRobot object to be copied
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
MobileRobot::MobileRobot(MobileRobot &copy)
{
    numberOfWheels = copy.numberOfWheels;
    no_of_sensors = copy.no_of_sensors;
    cameraType = copy.cameraType;
    LidarType = copy.LidarType;
    acceleration = copy.acceleration;
    length = copy.length;
    name = copy.name;
    type = copy.type;
    velocity = copy.velocity;
    weight = copy.weight;
    width = copy.width;

#if DEBUG == true
    green();
    cout<<"[*] Entered copy constructor of MobileRobot object"<<endl;
#endif
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 * @brief Destroy the Mobile Robot:: Mobile Robot object
 * 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
MobileRobot::~MobileRobot()
{
#if DEBUG == true
    red();
    cout << "[*] Destroying MobileRobot Object"<<endl;
#endif
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief Get the Number Of Wheels object
 *
 * @return unsigned int number of wheels
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
unsigned int MobileRobot::getNumberOfWheels()
{
    return numberOfWheels;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief Get the Number Of Sensors object
 *
 * @return unsigned int number of sensors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
unsigned int MobileRobot::getNumberOfSensors()
{
    return no_of_sensors;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief move function used to move the robot and print out the the
 *          in moving state
 *
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void MobileRobot::move()
{

    cout << "The mobile robot is moving !!!" << endl ;
}
/*******************************************************************************
 * @brief return velocity of the robot
 * 
 * @return double 
 *******************************************************************************/

double MobileRobot::getVelocity()
{
    return this->velocity;
}
/*******************************************************************************
 * @brief return Acceleration of the robot
 * 
 * @return double 
 *******************************************************************************/
double MobileRobot::getAcceleration()
{
    return this->acceleration;
}


/****************************** End of File ***********************************/
