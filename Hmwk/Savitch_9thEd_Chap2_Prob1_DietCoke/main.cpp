/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 21, 2022, 12:01 PM
 * Purpose:  C++ Template - to be used in all future Assignments
 */

//System Libraries
#include <iostream>
using namespace std;

//user libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float SWEETENER_FRACTION=0.001;
const float SODA_CAN_MASS=350;//mass

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float amt_to_kill_mouse=5.00;//5grams
    float wgtMs=35.00;//35grams
    float dieWgt,
    conWgt;
    
    //Initialize Variables
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>dieWgt;
    
    //Map inputs to outputs -> The Process
     conWgt=dieWgt*453.59237;
    
    float lethal_prop=amt_to_kill_mouse/wgtMs;
    float lethal_amt=lethal_prop*conWgt;
    
    int num_cans=lethal_amt/(SWEETENER_FRACTION*SODA_CAN_MASS);
    
    //Display Results
     cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<num_cans<<" cans";

    //Exit Stage Right
    return 0;
}

