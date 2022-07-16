/* 
 * File:   
 * Author: 
 * Created on 
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
    float A,//first number
    B,//second number
    C;//third number
    
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:"<<endl<<endl;
    cin>>A;
    cout<<"Enter Second number:"<<endl<<endl;
    cin>>B;
    cout<<"Enter third number:"<<endl<<endl;
    cin>>C;
    //Map inputs -> outputs
    cout<<"Largest number from two parameter function:"<<endl;
    if (B>A){
        swap (B, A);
    }
    cout<<A<<endl<<endl;
    cout<<"Largest number from three parameter function:"<<endl;
    if (B>C){
        swap (B, C);
    }
    if (A>C){
        swap (A, C);
    }
    cout<<C<<endl;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

