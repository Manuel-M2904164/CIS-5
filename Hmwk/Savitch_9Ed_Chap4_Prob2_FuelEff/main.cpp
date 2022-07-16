/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip>
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
    MPG1,
    MPG2;
    char A;//user input
    
    //Initialize or input i.e. set variable values
     while (A!='n'){
         cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>Ltrs;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>Mls;
        LTG=Ltrs*.264179;
        MPG1=(Mls/LTG);
        cout<<"miles per gallon: "<<fixed<<setprecision(2)<<showpoint<<MPG1<<endl<<endl;
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>Ltrs;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>Mls;
        LTG=Ltrs*.264179;
        MPG2=(Mls/LTG);
        cout<<"miles per gallon: "<<fixed<<setprecision(2)<<showpoint<<MPG2<<endl<<endl;
        if (MPG1>MPG2){
            cout<<"Car 1 is more fuel efficient"<<endl<<endl;
        }else cout<<"Car 2 is more fuel efficient"<<endl<<endl;
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

