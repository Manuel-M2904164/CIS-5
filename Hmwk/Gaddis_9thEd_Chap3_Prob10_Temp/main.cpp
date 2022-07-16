/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 21, 2022, 12:01 PM
 * Purpose:  C++ Template - to be used in all future Assignments
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//user libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float F;
    
    //Initialize Variables
     cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>F;
    
    //Map inputs to outputs -> The Process
    float C=(F-32)*5/9;
    
    //Display Results
    cout<<F<<" Degrees Fahrenheit = "<<C<<" Degrees Centigrade";

    //Exit Stage Right
    return 0;
}

