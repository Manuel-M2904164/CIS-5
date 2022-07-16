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
    char p1, p2;
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>p1>>p2;
    
    
    //Map inputs -> outputs
    if (p1=='P'||p1=='p'){
        if (p2=='R'||p2=='r'){
            cout<<"Paper covers rock.";
        }else if (p2=='S'||p2=='s'){
            cout<<"Scissors cuts paper.";
        }
    }
    else if (p1=='R'||p1=='r'){
        if (p2=='P'||p2=='p'){
            cout<<"Paper covers rock.";
        }else if (p2=='S'||p2=='s'){
            cout<<"Rock breaks scissors.";
        }
    }
    else if (p1=='S'||p1=='s'){
        if (p2=='P'||p2=='p'){
            cout<<"Scissors cuts paper.";
        }else if (p2=='R'||p2=='r'){
            cout<<"Rock breaks scissors.";
        }
    }
    
    //Display the outputs

    //Exit Stage Right
    return 0;
}

