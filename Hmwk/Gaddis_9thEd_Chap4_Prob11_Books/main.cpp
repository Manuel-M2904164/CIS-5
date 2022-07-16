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
    float bksPrc,//books purchased
    pntsAw,//points awarded
    tPnts;
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bksPrc;
    
    //Map inputs -> outputs
    if (bksPrc>=0)pntsAw=0;
    if (bksPrc>=1)pntsAw=5;
    if (bksPrc>=2)pntsAw=15;
    if (bksPrc>=3)pntsAw=30;
    if (bksPrc>=4)pntsAw=60;
    
    //Display the outputs
    cout<<"Books purchased =  "<<bksPrc<<endl;
    cout<<"Points earned   = "<<pntsAw;

    //Exit Stage Right
    return 0;
}

