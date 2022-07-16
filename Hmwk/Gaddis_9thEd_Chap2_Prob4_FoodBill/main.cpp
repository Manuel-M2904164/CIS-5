/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 25, 2022, 2:05 PM
 * Purpose: Calculate bill, tax, tip
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
    float mCst,//Meal cost
            pTp,//Percentage of tip
            pTx,//percent of tax
            tTx,//total tax
            tTp,//total tip
            aDu;//Amount due
            
    
    //Initialize Variables
            mCst=88.67;
    pTp=.20;
    pTx=.0675;
    
    //Map inputs to outputs -> The Process
    tTx=mCst*pTx;
    tTp=(mCst+tTx)*pTp;
    aDu=mCst+tTx+tTp;
    
    //Display Results
    std::cout<<std::fixed;
    std::cout<<std::setprecision(2);
    cout<<"Meal: $"<<mCst<<endl;
    cout<<"Tax: $"<<tTx<<endl;
    cout<<"Tip: $"<<tTp<<endl;
    cout<<"Total Amount due: $"<<aDu<<endl;
    

    //Exit Stage Right
    return 0;
}

