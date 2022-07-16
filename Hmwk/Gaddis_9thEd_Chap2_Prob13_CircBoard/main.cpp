/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 25, 2022, 1:25 PM
 * Purpose: Calculate profit
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
    float sPri,//selling price
            pPer,//Profit percent
            pAmt,//Profit amount
            oPri;//original price
    
    //Initialize Variables
    oPri=14.95;
    pPer=.35;
    
    //Map inputs to outputs -> The Process
    pAmt=oPri*pPer;
    sPri=pAmt+oPri;
    
    
            
    
    //Display Results
    std::cout<<std::fixed;
    std::cout<<std::setprecision(2);
    cout<<"Selling price is $"<<sPri<<endl;

    //Exit Stage Right
    return 0;
}

