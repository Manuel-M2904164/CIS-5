/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int Ltrs,//litres
    Mls;//miles traveled
    float LTG,//litres to gallons
    MPG;
    char A;//user input
    
    
    //Initialize or input i.e. set variable values
    while (A!='n'){
        cout<<"Enter number of liters of gasoline:"<<endl<<endl;
        cin>>Ltrs;
        cout<<"Enter number of miles traveled:"<<endl<<endl;
        cin>>Mls;
        LTG=Ltrs*.264179;
        MPG=(Mls/LTG);
        cout<<"miles per gallon:"<<endl<<fixed<<setprecision(2)<<showpoint<<MPG<<endl;
        cout<<"Again:"<<endl;
        cin>>A;
        if (A!='n'){
            cout<<endl;
        }
    }
    
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

