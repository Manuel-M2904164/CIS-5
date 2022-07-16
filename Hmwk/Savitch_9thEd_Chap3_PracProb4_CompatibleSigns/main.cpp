/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 21, 2022, 12:01 PM
 * Purpose:  C++ Template - to be used in all future Assignments
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string S1,//sign 1
    S2,//sign 2
    E1,
    E2;
    
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>S1>>S2;
    
    //Map inputs -> outputs
    if(S1=="Aries"||S1=="Leo"||S1=="Sagittarius")E1="Fire";
    else if(S1=="Taurus"||S1=="Virgo"||S1=="Capricorn")E1="Earth";
    else if(S1=="Gemini"||S1=="Libra"||S1=="Aquarius")E1="Air";
    else if(S1=="Cancer"||S1=="Scorpio"||S1=="Pisces")E1="Water";
    
   if(S2=="Aries"||S2=="Leo"||S2=="Sagitarius")E2="Fire";
    else if(S2=="Taurus"||S2=="Virgo"||S2=="Capricorn")E2="Earth";
    else if(S2=="Gemini"||S2=="Libra"||S2=="Aquarius")E2="Air";
    else if(S2=="Cancer"||S2=="Scorpio"||S2=="Pisces")E2="Water";
    
    //Display the outputs
    if(E1==E2)cout<<S1<<" and "<<S2<<" are compatible "<<E1<<" signs.";
    else cout<<S1<<" and "<<S2<<" are not compatible signs.";

    //Exit Stage Right
    return 0;
}

