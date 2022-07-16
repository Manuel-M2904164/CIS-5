/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 21, 2022, 12:01 PM
 * Purpose:  C++ Template - to be used in all future Assignments
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//user libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
      int nSum=0, pSum=0, tSum=0;
    int a,b,c,d,e,f,g,h,i,j;
    
    //Initialize Variables
      cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
    tSum+=a;
    if (a>0){
        pSum+=a;
    }
    else{
        nSum+=a;
    }
    tSum+=b;
     if (b>0){
        pSum+=b;
    }
    else{
        nSum+=b;
    }
    tSum+=c;
     if (c>0){
        pSum+=c;
    }
    else{
        nSum+=c;
    }
    tSum+=d;
     if (d>0){
        pSum+=d;
    }
    else{
        nSum+=d;
    }
    tSum+=e;
     if (e>0){
        pSum+=e;
    }
    else{
        nSum+=e;
    }
    tSum+=f;
     if (f>0){
        pSum+=f;
    }
    else{
        nSum+=f;
    }
    tSum+=g;
     if (g>0){
        pSum+=g;
    }
    else{
        nSum+=g;
    }
    tSum+=h;
     if (h>0){
        pSum+=h;
    }
    else{
        nSum+=h;
    }
    tSum+=i;
     if (i>0){
        pSum+=i;
    }
    else{
        nSum+=i;
    }
    tSum+=j;
     if (j>0){
        pSum+=j;
    }
    else{
        nSum+=j;
    }
    
    //Map inputs to outputs -> The Process
    
    //Display Results
      cout<<"Negative sum ="<<setw(4)<<nSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<pSum<<endl;
    cout<<"Total sum    ="<<setw(4)<<tSum;

    //Exit Stage Right
    return 0;
}

