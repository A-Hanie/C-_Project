/****************************************************************************
* Title                 :   MobileManipulator
* Filename              :   MobileManipulator.cpp
* Author                :   Ahmed Hanie
* Origin Date           :   8-2-2023
* Version               :   1.0.0
* Compiler              :   gcc 9.4.0
* Target                :   TBD
*******************************************************************************/
/** @file MobileManipulator.cpp
 *  @brief The implementation for the  MobileManipulator Class
 *  @name: MobileManipulator
 *  @variables: range, weight, Location(class E)
 *  @methods: navigate, move, pickObject, display (to display all the data)
 */
/******************************************************************************
* Includes
*******************************************************************************/
#include "../include/MobileManipulator.h"
#include "../include/utilities.h"

#include "stdio.h"

/******************************************************************************
* Module Variable Definitions
*******************************************************************************/

char attributes[][30] = {"Weight:", "Number of wheel:" , "payload:","workspace_size:","Max Reach:","length:","width:","velocity","acceleration","No Code of end effector", "no of sensors","Number of wheel"};
int attributes_val[12] = {};
/******************************************************************************
 * Function Definitions
 *******************************************************************************/

MobileManipulator::MobileManipulator() :MobileRobot(0, 0, RealSense, HOKUYO),
                                    Manipulator(0, 0, 0, 0),
                                    Robot(turtleBot3,Waffle,0,0,0,0,0)
{
    setEndEffectorType(0);
    set_maxReach(0);
    set_payload(0);
    mobileManipulator_Loc.setter(0,0,0,0);

    cout<< "\n##################################################################" <<endl;
    green();
    cout << "\nEntered custom default constructor of MobileManipulator object " << endl<< endl;


}

MobileManipulator::MobileManipulator(robotName_t robotName_, turtleBotModel_t type, Camera_t camera, Lidar_t lidar, int no_of_sensors, double weight,
                                     double length, double width, int number_of_wheel, int payload, int workspace_size, double maxReach,
                                     int no_Code_of_end_effector, double velocity, double acceleration)
                                    :MobileRobot(number_of_wheel, no_of_sensors, camera, lidar),
                                    Manipulator(payload, workspace_size, maxReach, no_Code_of_end_effector),
                                    Robot(robotName_,type,weight,length,width,velocity,acceleration)
{
    mobileManipulator_Loc.setter(0,0,0,0);
    this->weight = weight;
    green();
    cout << "\nEntered custom non-default constructor of MobileManipulator object " << endl;
    reset();
}

 
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * @brief Construct a new Robot object from copied one
 *
 * @param Robot object to be copied
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
MobileManipulator::MobileManipulator(MobileManipulator &copy) : MobileRobot(copy.numberOfWheels,copy.no_of_sensors,copy.cameraType,copy.LidarType),
                                                                Manipulator(copy.payload, copy.workspace_size, copy.maxReach, copy.no_Code_of_end_effector),
                                                                Robot(copy.name,copy.type,copy.weight,copy.length,copy.width, copy.velocity,copy.acceleration)
    {

        this->weight = copy.MobileManipulator::Robot::weight;

        setEndEffectorType(copy.GetEndEffectorType());
        set_maxReach(copy.getMaxReach());
        set_payload(copy.getPayload());
        green();
        cout << "Entered custom copy constructor of MobileManipulator object " << endl
             << endl;
        // reset();
    }
    MobileManipulator::~MobileManipulator()
    {
        red();
        cout << "\nDestroy MobileManipulator object " << endl;
        reset();
    }

    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief
     *
     * @param _x_meter
     * @param _x_cm
     * @param _y_meter
     * @param _y_cm
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    void MobileManipulator::navigate(int x_meter, int x_cm, int y_meter, int y_cm)
    {

        int local_x_m, local_x_cm, local_y_m, local_y_cm;
        mobileManipulator_Loc.getter(local_x_m, local_x_cm, local_y_m, local_y_cm);

        cyan();
        printf("Navigation\n");
        purple();
        printf("%s", "Location before modification:\n");
        blue();
        printf("%-10s", "x_meters");
        reset();
        printf("%-5d", local_x_m);
        blue();
        printf("%-10s", "x_cm");
        reset();
        printf("%-5d\n", local_x_cm);
        blue();
        printf("%-10s", "y_meters");
        reset();
        printf("%-5d", local_y_m);
        blue();
        printf("%-10s", "y_cm");
        reset();
        printf("%-5d\n", local_y_cm);

        Location target_Localtion(x_meter, x_cm, y_meter, y_cm);
        Location temp_Locatoin;
        temp_Locatoin = mobileManipulator_Loc + target_Localtion;

        temp_Locatoin.getter(local_x_m, local_x_cm, local_y_m, local_y_cm);
        mobileManipulator_Loc.setter(local_x_m, local_x_cm, local_y_m, local_y_cm);

        local_x_m = local_x_m + local_x_cm / 100;
        local_x_cm = ((local_x_cm >= 100) ? local_x_cm % 100 : local_x_cm);
        local_y_m = local_y_m + local_y_cm / 100;
        local_y_cm = ((local_y_cm >= 100) ? local_y_cm % 100 : local_y_cm);
        purple();
        printf("%s", "\nLocation after modification:\n");
        blue();
        printf("%-10s", "x_meters");
        reset();
        printf("%-5d", local_x_m);
        blue();

        printf("%-10s", "x_cm");
        reset();
        printf("%-5d\n", local_x_cm);
        blue();

        printf("%-10s", "y_meters");
        reset();

        printf("%-5d", local_y_m);
        blue();

        printf("%-10s", "y_cm");
        reset();

        printf("%-5d\n\n", local_y_cm);
    }
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief function used to drive the robot
     *
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    void MobileManipulator::move()
    {
        yellow();
        cout << endl
             << "Robot in moving state" << endl
             << endl;
        reset();
    }
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief function to pick an object
     *
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    void MobileManipulator::pickObject()
    {
        yellow();
        cout << endl
             << "Robot picked the Object !!!" << endl
             << endl;
        reset();
    }
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @brief used to display all robot info
     *
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

    /***/
    void MobileManipulator::display()
    {
        purple();
        printf("Mobile Manipulator data #:  \n");
        blue();
        cout << "Name = ";
        reset();

        switch (Manipulator::name)
        {
        case jakal:
            cout << "Jakal ";
            break;
        case turtleBot3:
            cout << "TurtleBot3 ";
            break;
        case turtleBot2:
            cout << "TurtleBot2 ";
            break;
        default:
            cout << "default ";
            break;
        }
        printf("%-8s", "");

        blue();
        cout << "Type : ";
        reset();

        switch (type)
        {
        case Burger:
            cout << "Burger ";
            break;
        case Waffle:
            cout << "Waffle ";
            break;
        default:
            cout << "Waffle_Pi ";
            break;
        }
        printf("%-8s", "");

        blue();
        cout << "LidarType: ";
        reset();
        switch (LidarType)
        {
        case RPLidar:
            cout << "RPLidar ";
            break;
        case YDLidar:
            cout << "YDLidar ";
            break;

        default:
            cout << "HOKUYO ";
            break;
        }
        printf("%-8s", "");

        blue();
        cout << "CameraType: ";
        reset();

        switch (cameraType)
        {
        case pi_CAM:
            cout << "pi_CAM, " << endl;
            break;
        case _5MP:
            cout << "_5MP, " << endl;
            break;
        case ZED:
            cout << "ZED, " << endl;
            break;
        default:
            cout << "RealSense, " << endl;
            break;
        }
        cout << endl;
        attributes_val[0] = (int)MobileManipulator::weight;
        attributes_val[1] = (int)numberOfWheels;
        attributes_val[2] = (int)getPayload();
        attributes_val[3] = (int)workspace_size;
        attributes_val[4] = (int)getMaxReach();
        attributes_val[5] = (int)length;
        attributes_val[6] = (int)width;
        attributes_val[7] = (int)getVelocity();
        attributes_val[8] = (int)getAcceleration();
        attributes_val[9] = (int)GetEndEffectorType();
        attributes_val[10] = (int)no_of_sensors;
        attributes_val[11] = (int)numberOfWheels;

        for (int i = 1; i < 13; ++i)
        {
            blue();
            printf("%-25s", attributes[i - 1]);
            reset();
            printf("%-9d", attributes_val[i - 1]);
            if ((!(i % 3)))
            {
                printf("\n");
            }
        }
        purple();
        cout << "\n###### End of Data #######" << endl
             << endl;
        reset();
    }

    /****************************** End of File ***********************************/
