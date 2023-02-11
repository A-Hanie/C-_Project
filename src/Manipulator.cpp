/****************************************************************************
 * Title                 :   Manipulator
 * Filename              :   Manipulator.cpp
 * Author                :   Ahmed Hanie
 * Origin Date           :   8-2-2023
 * Version               :   1.0.0
 * Compiler              :   gcc 9.4.0
 * Target                :   TBD
 *******************************************************************************/
/** @file  Manipulator.cpp
 *  @brief The implementation for the Manipulator class
 *  @name: Manipulator
 *  @variables: payload, workspace, maxReach, list of end effectors
 *  @methods: getPayload, setEndEffectorType, getMaxReach, pickObject
 */
/******************************************************************************
 * Includes
 *******************************************************************************/
#include "../include/Manipulator.h"
#include "../include/utilities.h"

/******************************************************************************
 * Function Definitions
 *******************************************************************************/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* @brief: 1st default Construct a new Manipulator object
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
Manipulator::Manipulator()  :payload(0), workspace_size(0), maxReach(0), no_Code_of_end_effector(0)
{
#if DEBUG == true
    green();
    cout << "Entered default constructor of Manipulator object" << endl;
    reset();
#endif

}


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 * @brief 2ed non-default Constructor a new Manipulator object
 * 
 * @param robotName 
 * @param type 
 * @param weight 
 * @param length 
 * @param width 
 * @param velocity 
 * @param acceleration 
 * @param payload 
 * @param workspace_size 
 * @param maxReach 
 * @param list_of_end_effectors 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
Manipulator::Manipulator(int payload, int workspace_size, double maxReach, int no_code_of_end_effectors)
{
    this->payload = payload;
    this->workspace_size = workspace_size;
    this->maxReach = maxReach;
    this->no_Code_of_end_effector = no_code_of_end_effectors;

#if DEBUG == true
    green();

    cout << "Entered non-default constructor of Manipulator object" << endl;
    reset();
#endif
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief: Destroy the Manipulator object
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
Manipulator::~Manipulator()
{
#if DEBUG == true
    red();
    cout << "Entered destructor of Manipulator object" << endl;
    reset();
#endif
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief Get the Payload object
 *
 * @return int number of payload
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
int Manipulator::getPayload()
{
    return payload;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief Set the End Effector Type object
 *
 * @param type is char
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void Manipulator::setEndEffectorType(int type)
{
    no_Code_of_end_effector = type;
}

int Manipulator::GetEndEffectorType()
{
    return  no_Code_of_end_effector;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief Get the Max Reach object
 *
 * @return double number of maxReach
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
double Manipulator::getMaxReach()
{
    return maxReach;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief function to print "pick the Object state is activated"
 *
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void Manipulator::pickObject()
{
    cout << "pick the Object state is activated" << endl;
}

/*******************************************************************************
 * @brief Set the payload object
 *
 * @param val
 *******************************************************************************/
void Manipulator::set_payload(int val)
{
    payload = val;
}
/*******************************************************************************
 * @brief Set the maxReach object
 *
 * @param val
 *******************************************************************************/
void Manipulator::set_maxReach(int val)
{
    maxReach =val;
}

/****************************** End of File ***********************************/
