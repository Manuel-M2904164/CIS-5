/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 25, 2022, 1:15 PM
 * Purpose: Create a multi-line output with only a single cout statement
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//user libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string Nm,//Name
            Add,//Address
            Ct,//City
            St,//State
            Zp,//Zip code
            cPhn,//Cell Phone
            Mjr;//Major
    
    //Initialize Variables
    Nm="Manny Medina";
    Add="3411 Grande Vista Pkwy";
    Ct="Riverside";
    St="California";
    Zp="92503";
    cPhn="(951)842-9497";
    Mjr="Electrical Engineer";
            
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout<<Nm<<endl<<Add<<endl<<Ct<<endl<<St<<endl<<Zp<<endl<<cPhn<<endl<<Mjr<<endl;
 
    //Exit Stage Right
    return 0;
}

