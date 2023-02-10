/****************************************************************************
* Title                 :   Location
* Filename              :   Location.h
* Author                :   Ahmed Hanie
* Origin Date           :   8-2-2023
* Version               :   1.0.0
* Compiler              :   gcc 9.4.0
* Target                :   TBD
*******************************************************************************/
/** @file: Location.h
 *  @brief: The interface definition for the Location Class
 *  @name: Location
 *  @variables: x_meter, x_cm, y_meter, y_cm
 *  @methods: getter, setter, operator+
 */

#ifndef LOCATION
#define LOCATION
/******************************************************************************
* Includes
*******************************************************************************/
#include <iostream>
#include "utilities.h"

using namespace std;
/******************************************************************************
* Macros
*******************************************************************************/
#define LOCATION_INITIAL_VALUE  0


/******************************************************************************
* Typedefs
*******************************************************************************/

class Location
{
protected:
    /* data */


public:

    int *x_meter = NULL;
    int *x_cm=  NULL;
    int *y_meter = NULL;
    int *y_cm = NULL;
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
     * @brief: 1st Construct a new Location object
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    Location();

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief: 2ed non-default Constructor
     *
     * @param: x_meter x position in meter
     * @param: x_cm x position in centimeter
     * @param: y_meter y position in meter
     * @param: y_cm y position in centimeter
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    Location(int x_meter, int x_cm, int y_meter, int y_cm);

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief Construct a new Location object
     *
     * @param Location object to be copied
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    Location(const Location &copy);

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief: Destroy the Location object
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    ~Location();

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
     * @name: setter
     * @brief: to set the variable value with indirect way
     * 
     * @param: x_meter x position in meter
     * @param: x_cm x position in centimeter
     * @param: y_meter y position in meter
     * @param: y_cm y position in centimeter
     *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    void setter(int x_meter, int x_cm, int y_meter, int y_cm);

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
     * @brief: to get the variable value with indirect way
     * 
     * @param: x_meter x position in meter to write value into it
     * @param: x_cm x position in centimeter to write value into it
     * @param: y_meter y position in meter to write value into it
     * @param: y_cm y position in centimeter to write value into it
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    void getter(int &x_meter, int &x_cm, int &y_meter, int &y_cm);

    // Operator Assignments 
    Location operator+( Location &rhs);


};

/******************************************************************************
* Variables
*******************************************************************************/


/******************************************************************************
* Function Prototypes
*******************************************************************************/

#endif //LOCATION
/****************************** End of File ***********************************/