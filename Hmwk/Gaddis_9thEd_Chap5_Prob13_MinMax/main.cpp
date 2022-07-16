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
    int A,//entered value
    Mn,//smallest number
    Mx;//biggest number
    
    //Initialize or input i.e. set variable values
    cin>>A;
    Mn=Mx=A;
    while (A != -99){
        if (A<Mn){
            Mn=A;
        }
        if (A>Mx){
            Mx=A;
        }
        cin>>A;
    }
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<Mn<<endl;
    cout<<"Largest  number in the series is "<<Mx;

    //Exit stage right or left!
    return 0;
}

