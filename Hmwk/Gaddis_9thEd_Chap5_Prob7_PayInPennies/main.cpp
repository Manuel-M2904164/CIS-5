/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int nDays;
    int totSum=0;
    int cent;
    
    //Initialize or input i.e. set variable values
    cent=1;
    cin>>nDays;
    
    
    for (int i=1;i<=nDays;i++){
        totSum+=cent;
        cent*=2;
    }
    
    //Map inputs -> outputs
    int dollar = totSum/100;
    int change = totSum%100;
    cout<<"Pay = $"<<dollar<<"."<<(change<10?"0":"")<<change;
    
    //Display the outputs
    

    //Exit stage right or left!
    return 0;
}

