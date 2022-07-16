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
      float cksAte,//cookies ate
    calPsrv,//calores per serving
    cksPsrv,//cookies per serving
    calCsmd;//calories consumed
    
    //Initialize Variables
      cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cksAte;
    calPsrv=300;
    cksPsrv=4;
    
    //Map inputs to outputs -> The Process
     calCsmd=(calPsrv/cksPsrv)*cksAte;
    
    //Display Results
    cout<<"You consumed "<<calCsmd<<" calories.";

    //Exit Stage Right
    return 0;
}

