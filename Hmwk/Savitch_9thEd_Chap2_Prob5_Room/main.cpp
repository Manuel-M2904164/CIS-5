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

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float mOcc,//max occupancy
    cOcc,//current occupancy
    gMt,
    bMt;
    
    //Initialize Variables
     cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>mOcc;
    cin>>cOcc;
    
    //Map inputs to outputs -> The Process
    gMt=mOcc-cOcc;
    bMt=cOcc-mOcc;
    if (mOcc<cOcc) {
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<<bMt<<" to avoid fire violation.";
    }
    else if (mOcc>cOcc) {
        cout<<"Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<gMt<<" will be allowed without violation.";
    }
    
    //Display Results

    //Exit Stage Right
    return 0;
}

