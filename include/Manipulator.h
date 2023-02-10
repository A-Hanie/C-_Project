/****************************************************************************
* Title                 :   Manipulator
* Filename              :   Manipulator.h
* Author                :   Ahmed Hanie
* Origin Date           :   8-2-2023
* Version               :   1.0.0
* Compiler              :   gcc 9.4.0
* Target                :   TBD
*******************************************************************************/
/** @file: Manipulator.h
 *  @brief: The interface definition for the Manipulator Class
 *  @name: Manipulator
 *  @variables: payload, workspace, maxReach, list of end effectors
 *  @methods: getPayload, setEndEffectorType, getMaxReach, pickObject
 */
#ifndef MANIPULATOR
#define MANIPULATOR
/******************************************************************************
* Includes
*******************************************************************************/
#include <iostream>
#include "utilities.h"
#include "Location.h"
#include "Robot.h"
using namespace std;
/******************************************************************************
* Macros
*******************************************************************************/


/******************************************************************************
* Typedefs
*******************************************************************************/
class Manipulator : virtual public Robot
{
protected:
    /* data */
    Location manipulator_Location;
    int payload;
    double maxReach;
    char no_Code_of_end_effector;

public:
    int workspace_size;

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
     * @brief: 1st default Construct a new Manipulator object
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    Manipulator();
    
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

     * @brief 2ed non-default Constructor a new Manipulator object
     * 
     * @param payload 
     * @param workspace 
     * @param maxReach 
     * @param list_of_end_effectors 
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    Manipulator(int payload, int workspace_size, double maxReach, int list_of_end_effectors);

    int GetEndEffectorType();


    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

     * @brief 3ed non-default Constructor a new Manipulator object
     * 
     * @param payload 
     * @param maxReach 
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    Manipulator(Manipulator &copy);

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief: Destroy the Location object
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    ~Manipulator();

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief Get the Payload object
     *
     * @return int
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    int getPayload();
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief Set the End Effector Type object
     *
     * @param type
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    void setEndEffectorType(int type);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief Get the Max Reach object
     *
     * @return double
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    double getMaxReach();
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief
     *
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    void pickObject();
    /*******************************************************************************
     * @brief Set the payload object
     * 
     * @param val int value 
     *******************************************************************************/
    void set_payload(int val);
    /*******************************************************************************
     * @brief Set the maxReach object
     * 
     * @param val integar val
     *******************************************************************************/
    void set_maxReach(int val);



};
#endif
/****************************** End of File ***********************************/