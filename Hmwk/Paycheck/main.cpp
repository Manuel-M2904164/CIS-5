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
     float Wge,
          Hrs,
          grsPay=0;
    
    //Initialize Variables
      cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>Wge;
    cin>>Hrs;
    
    //Map inputs to outputs -> The Process
     grsPay=Wge*Hrs;
    grsPay+=Hrs>40?Wge*(Hrs-40):0;
    
    //Display Results
     std::cout<<std::fixed;
    std::cout<<std::setprecision(2);
    cout<<"Paycheck = $"<<setw(7)<<grsPay;


    //Exit Stage Right
    return 0;
}

