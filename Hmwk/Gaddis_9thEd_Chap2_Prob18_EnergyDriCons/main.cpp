/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 23, 2022, 12:01 PM
 * Purpose: Percent of customers that buy citrus enrg drnk 1 or more times/week
 */

//System Libraries
#include <iostream>
using namespace std;

//user libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const unsigned char PERCENT=100;//conversion to percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short cstSrvy,//customers surveyed 
            nEDkr,//Number of customers that are energy drinkers
            nCDkr;//number of customers that are citrus drinkers
    
    unsigned char lylCst,//Percent of customers that buy 1 or times/week
            cCit;//lylCst that buy one or more citrus energy drinks
    
    //Initialize Variables
    cstSrvy=16500;//16500 customers
    lylCst=15;//15 percent
    cCit=58;//58 percent
    
    
    //Map inputs to outputs -> The Process
    nEDkr=cstSrvy*lylCst/PERCENT;
    nCDkr=nEDkr*cCit/PERCENT;
    
    //Display Results
    cout<<"Number of Customers that use Energy Drinks = "<<nEDkr<<endl;
    cout<<"number of customers that prefer Citrus Drinks = "<<nCDkr<<endl;

    //Exit Stage Right
    return 0;
}

