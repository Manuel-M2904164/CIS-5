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
#include <cstring>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string Rn1,//runner 1
    Rn2,//runner2
    Rn3;//runner3
    int rn1T,//runner1time
    rn2T,//runner2time
    rn3T;//runner3time
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>Rn1>>rn1T;
    cin>>Rn2>>rn2T;
    cin>>Rn3>>rn3T;
    
    //Map inputs -> outputs
    if (rn1T > rn3T)
   swap(Rn1, Rn3), swap (rn1T, rn3T);

    if (rn1T > rn2T)
   swap(Rn1, Rn2), swap(rn1T, rn2T);
   
   if (rn2T > rn3T)
   swap(Rn2, Rn3), swap(rn2T, rn3T);
    
    //Display the outputs
    cout<<Rn1<<"\t"<<setw(3)<<rn1T<<endl;
    cout<<Rn2<<"\t"<<setw(3)<<rn2T<<endl;
    cout<<Rn3<<"\t"<<setw(3)<<rn3T;

    //Exit Stage Right
    return 0;
}

