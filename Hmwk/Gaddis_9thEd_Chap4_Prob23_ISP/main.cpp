/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 21, 2022, 12:01 PM
 * Purpose:  C++ Template - to be used in all future Assignments
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char Pkg;//Package
    float Hrs,//hours
    mthBll,//monthly Bill
    aHrs,//additional hours
    tBll;//total bill
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>Pkg>>Hrs;
    
    if (Pkg>=65){
        mthBll=9.95;
        aHrs=Hrs-10;
        if (Hrs>10){
            tBll=mthBll+(aHrs*2.00);
        }
        else tBll=mthBll;
    }
    if (Pkg>=66){
        mthBll=14.95;
        aHrs=Hrs-20;
        if (Hrs>20){
            tBll=mthBll+aHrs;
        }
        else tBll=mthBll;
    }
    if (Pkg>=67){
        mthBll=19.95;
        tBll=mthBll;
    }
    
    //Map inputs -> outputs
    
    
    //Display the outputs
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Bill = $ "<<tBll;

    //Exit Stage Right
    return 0;
}

