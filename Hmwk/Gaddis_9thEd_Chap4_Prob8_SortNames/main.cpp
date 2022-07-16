/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 21, 2022, 12:01 PM
 * Purpose:  C++ Template - to be used in all future Assignments
 */

//System Libraries
#include <iostream>
#include <cstring>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string a,
    b,
    c;
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>a>>b>>c;
    
    //Map inputs -> output
    if (a > c)
   swap(a, c);

    if (a > b)
   swap(a, b);

    if (b > c)
   swap(b, c);
    
    
    //Display the outputs
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c;
    
    //Exit Stage Right
    return 0;
}

