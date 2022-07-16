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
      float oSlry,//original salary
    pRs,//percent raise
    aSlry,//annual salary after raise
    mSlry,//monthly salary after raise
    raSlry;//retroactive raise
    
    //Initialize Variables
        cout<<"Input previous annual salary."<<endl;
    cin>>oSlry;
    pRs=0.076;
    
    //Map inputs to outputs -> The Process
     aSlry=(oSlry*pRs)+oSlry;
    mSlry=aSlry/12;
    raSlry=(oSlry*pRs)/2;
    
    
    //Display Results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Retroactive pay    = $"<<setw(7)<<raSlry<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<aSlry<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<mSlry;

    //Exit Stage Right
    return 0;
}

