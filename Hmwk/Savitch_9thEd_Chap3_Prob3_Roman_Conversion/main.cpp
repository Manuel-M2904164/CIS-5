/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 21, 2022, 12:01 PM
 * Purpose:  C++ Template - to be used in all future Assignments
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
    int arabic,n1000s,n100s,n10s,n1s,Yr;
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>arabic;
    Yr=arabic;
    
    //calculations
    //cout<<arabic<<"=";
    n1000s=arabic/1000;
    arabic-=n1000s*1000;
    n100s=arabic/100;
    arabic-=n100s*100;
    n10s=arabic/10;
    arabic-=n10s*10;
    n1s=arabic;
    //cout<<n1000s<<n100s<<n10s<<n1s<<endl;
    //Map inputs -> outputs
    if (Yr<1000||Yr>3000){
        cout<<Yr<<" is Out of Range!";
    }
    else {
        
        cout<<n1000s<<n100s<<n10s<<n1s<<" is equal to ";
         switch(n1000s){
        case 3:cout<<"M";
        case 2:cout<<"M";
        case 1:cout<<"M";
    }
    switch(n100s){
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<"D";break;
        case 4:cout<<"CD";break;
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";
    }
    switch(n10s){
        case 9:cout<<"XC";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<"L";break;
        case 4:cout<<"XL";break;
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"x";
    }
    switch(n1s){
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";
    }
    }
    //Display the outputs

    //Exit Stage Right
    return 0;
}

