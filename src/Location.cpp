/****************************************************************************
* Title                 :   Location
* Filename              :   Location.cpp
* Author                :   Ahmed Hanie
* Origin Date           :   8-2-2023
* Version               :   1.0.0
* Compiler              :   gcc 9.4.0
* Target                :   TBD
*******************************************************************************/
/** @file Location.cpp
 *  @brief The implementation for  for the Location class
 *  @name: Location
 *  @variables: x_meter, x_cm, y_meter, y_m
 *  @methods: getter, setter, operator+
 */
/******************************************************************************
* Includes
*******************************************************************************/
#include "../include/Location.h"
#include "../include/utilities.h"

/******************************************************************************
* Module Preprocessor Macros
*******************************************************************************/

/******************************************************************************
* Function Definitions
*******************************************************************************/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief 1st Construct a new Location object
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
Location::Location()
{
    x_meter = new int(LOCATION_INITIAL_VALUE);
    x_cm = new int(LOCATION_INITIAL_VALUE);
    y_meter = new int(LOCATION_INITIAL_VALUE);
    y_cm = new int(LOCATION_INITIAL_VALUE);

#if DEBUG == true
    green();
    cout << "Entered custom default constructor of Location object " << endl;
    reset();
#endif
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief: non-default Constructor
 *
 * @param: x_meter x position in meter
 * @param: x_cm x position in centimeter
 * @param: y_meter y position in meter
 * @param: y_cm y position in centimeter
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
Location::Location(int x_meter, int x_cm, int y_meter, int y_cm)
{
    this-> x_meter = new int(x_meter);
    this-> x_cm = new int(x_cm);
    this-> y_meter  = new int(y_meter);
    this-> y_cm = new int(y_cm);
#if DEBUG == true

    cout << "Entered custom non-default constructor of Location object " << endl;
#endif
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief Construct a new Location object
 *
 * @param Location object to be copied
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
Location::Location(const Location &copy)
{
    this->x_meter = new int(*copy.x_meter);
    this->x_cm = new int(*copy.x_cm);
    this->y_meter = new int(*copy.y_meter);
    this->y_cm = new int(*copy.y_cm);

#if DEBUG == true
    green();
    cout<<"Entered copy constructor of Location object"<<endl;
    reset();
#endif
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief: Destroy the Location object
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
Location::~Location()
{
    /* !!! cause crash in my comupter !!! */
    
    //delete x_meter;
    //delete x_cm;
    //delete y_meter;
    //delete y_cm;
    
#if DEBUG == true
    red();
    cout << "Destroying Location Object"<<endl;
    reset();
#endif
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @name: setter
 * @brief: to set the variable value with indirect way
 *
 * @param: x_meter x position in meter
 * @param: x_cm x position in centimeter
 * @param: y_meter y position in meter
 * @param: y_cm y position in centimeter
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void Location::setter(int x_meter, int x_cm, int y_meter, int y_cm)
{
    *(this-> x_meter) = x_meter;
    *(this-> x_cm) = x_cm;
    *(this->y_meter) = y_meter;
    *(this->y_cm) = y_cm;

#if DEBUG == true
    green();

    cout << "Entered setter of Location object " << endl;
    reset();

#endif
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief: to get the variable value with indirect way
 *
 * @param: x_meter x position in meter to write value into it
 * @param: x_cm x position in centimeter to write value into it
 * @param: y_meter y position in meter to write value into it
 * @param: y_cm y position in centimeter to write value into it
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void Location::getter(int &x_meter, int &x_cm, int &y_meter, int &y_cm)
{
    x_meter = *(this->x_meter);
    x_cm = *(this->x_cm);
    y_meter = *(this->y_meter);
    y_cm = *(this->y_cm);

#if DEBUG == true

    cout << "Entered getter of Location object " << endl;
#endif
}

// Operator Assignments


Location Location::operator+( Location &rhs)
{
    
     Location res;
    int x_meter_, x_cm_, y_meter_, y_cm_;
    
    getter(x_meter_, x_cm_, y_meter_, y_cm_);

    x_meter_ = *x_meter  + *(rhs.x_meter);
    x_cm_ += *(rhs.x_cm);
    y_meter_ += *(rhs.y_meter);
    y_cm_ += *(rhs.y_cm);

    res.setter(x_meter_, x_cm_ ,y_meter_ ,y_cm_);

    return res;
    
#if DEBUG == true

    cout << "Entered operator overloading method " << endl;
#endif

}
/****************************** End of File ***********************************/
