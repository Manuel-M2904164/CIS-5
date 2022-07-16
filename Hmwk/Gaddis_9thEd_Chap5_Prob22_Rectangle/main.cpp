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
    int A;//number of letters
    char B;//inputed character
    int C;
    
    //Initialize or input i.e. set variable values
    cin>>A>>B;
    C=A-1;
    
    //Map inputs -> outputs
    for (int i = 0; i<A; i++){
        for (int j = 0; j<A; j++){
            cout<<B;
        }
        if (i<C){
        cout<<endl;
        }
       
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

