/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 23, 2022, 10:50 AM
 * Purpose: Paint problem - How many cans of paint you need
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
    float pCvg,//coverage of a gallon of paint ft^2
        fncHgt,// Fence Height in ft
        fncLen;//Fence Length in ft
    int nGalns;// Number of gallons of paint required
    
    //Initialize Variables 
    pCvg=3.4e2f;//340 square feet
    fncHgt=6.0e0f;//6 foot high fence
    fncLen=1.0e2f;//100 foot long fence
    
    //Map inputs to outputs -> The Process
    float srfAra=fncHgt*fncLen;//surface area of one side of fence
    float srfCov=2*2*srfAra;//Need to paint both sides twice
    nGalns=srfCov/pCvg+1;//Integer number of gallons of paint
    
    //Display Results
    cout<<"Fence Height = "<<fncHgt<<" feet"<<endl;
    cout<<"Fence Length = "<<fncLen<<" feet"<<endl;
    cout<<"Paint Coverage = "<<pCvg<<" feet^2"<<endl;
    cout<<"Number of gallons = "<<nGalns<<" gallons"<<endl;

    //Exit Stage Right
    return 0;
}

