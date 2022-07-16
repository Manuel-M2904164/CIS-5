/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 30, 2022, 10:15 PM
 * Purpose:  Pass Fail Ternary Operator
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//user libraries

//Global Constants

//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int score;//Score 50-100
    char grade,//pass/fail
            pfscr;
    
    //Initialize Variables
    score=rand()%51+50;//[50-100]
    pfscr=70;
    
    
    //Map inputs to outputs -> The Process
    grade=score>=90?'A':
          score>=80?'B':
          score>=70?'C':
          score>=60?'D':'F';
    
    //Display Results
    cout<<score<<" = "<<grade<<endl;

    //Exit Stage Right
    return 0;
}

