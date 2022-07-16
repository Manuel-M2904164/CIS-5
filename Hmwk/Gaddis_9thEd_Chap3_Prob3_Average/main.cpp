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
     float ts1,//test score 1
    ts2,//test score 2
    ts3,//test score 3
    ts4,//test score 4
    ts5,//test score 5
    ats;//average test score
    
    //Initialize Variables
     cout<<"Input 5 numbers to average."<<endl;
    cin>>ts1;
    cin>>ts2;
    cin>>ts3;
    cin>>ts4;
    cin>>ts5;
    
    //Map inputs to outputs -> The Process
     ats=(ts1+ts2+ts3+ts4+ts5)/5;
    
    //Display Results
       std::cout<<std::fixed;
    std::cout<<std::setprecision(1);
    cout<<"The average = "<<ats;

    //Exit Stage Right
    return 0;
}

