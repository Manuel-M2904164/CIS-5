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
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float P1,//price P1
    P2,//price P2
    inf;//inflation
    char A; //again?
    
    //Initialize or input i.e. set variable values
    while (A!='n'){
        cout<<"Enter current price:"<<endl;
        cin>>P1;
        cout<<"Enter year-ago price:"<<endl;
        cin>>P2;
        inf=((P1-P2)/P2)*100;
        cout<<"Inflation rate: "<<fixed<<setprecision(2)<<showpoint<<inf<<"%"<<endl<<endl;
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

