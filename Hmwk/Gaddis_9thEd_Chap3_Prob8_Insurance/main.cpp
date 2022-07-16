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
    float hmAmnt,//home amount
    prcCov,//percent coverage
    covAmnt;//coverage amount
    
    //Initialize Variables
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>hmAmnt;
    prcCov=.80;
    
    //Map inputs to outputs -> The Process
      covAmnt=hmAmnt*prcCov;
    
    //Display Results
        cout<<"You need $"<<covAmnt<<" of insurance.";

    //Exit Stage Right
    return 0;
}

