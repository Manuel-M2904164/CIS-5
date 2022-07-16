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
#include <cmath>
using namespace std;

//user libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
      float angl,//angle in degrees
    sAngl,//sin of angle
    csAngl,//cos of angle
    tAngl;//tan of angle
    
    //Initialize Variables
        cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angl;
    
    //Map inputs to outputs -> The Process
    sAngl=sin(angl*M_PI/180);
    csAngl=cos(angl*M_PI/180);
    tAngl=tan(angl*M_PI/180);
    
    //Display Results
    cout<<"sin("<<angl<<") ="<<setw(7)<<setprecision(4)<<sAngl<<endl;
    cout<<"cos("<<angl<<") ="<<setw(7)<<setprecision(4)<<csAngl<<endl;
    cout<<"tan("<<angl<<") ="<<setw(7)<<fixed<<setprecision(4)<<showpoint<<tAngl;

    

    //Exit Stage Right
    return 0;
}

