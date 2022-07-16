/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 23, 2022, 12:01 PM
 * Purpose: MPGk
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
    unsigned short mlsDrvn;//miles driven
    unsigned char mpg,//Miles Per Gallon
            nGalns;//Number of gallons
    
    //Initialize Variables
    mlsDrvn=375;//16500 customers
    nGalns=15;//15 percent
    
    
    //Map inputs to outputs -> The Process
    mpg=mlsDrvn/nGalns;
    
    //Display Results
    cout<<static_cast<int>(mpg)<<" miles per gallon = "
            <<mlsDrvn<<" miles driving / "
            <<static_cast<int>(nGalns)<<" gallons used "<<endl;
    //Exit Stage Right
    return 0;
}

