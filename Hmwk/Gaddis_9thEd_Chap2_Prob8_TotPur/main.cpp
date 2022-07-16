/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 25, 2022, 2:05 PM
 * Purpose: Calculate bill, tax, tip
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
    float Itm1,//Item 1
            Itm2,//Item 2
            Itm3,//Item 3
            Itm4,//Item 4
            Itm5,//Item 5
            sTot,//Subtotal
            sTx,//Sales Tax
            Tx,//Tax
            aDu;//Amount due
            
    
    //Initialize Variables
    Itm1=15.95;
    Itm2=24.95;
    Itm3=6.95;
    Itm4=12.95;
    Itm5=3.95;
    sTx=.07;
    
    //Map inputs to outputs -> The Process
    sTot=Itm1+Itm2+Itm3+Itm4+Itm5;
    Tx=sTot*sTx;
    aDu=sTot+Tx;
    
    //Display Results
    std::cout<<std::fixed;
    std::cout<<std::setprecision(2);
    cout<<"Item 1: $"<<Itm1<<endl<<"Item 2: $"<<Itm2<<endl<<"Item 3: $"<<Itm3<<endl<<"Item 4: $"<<Itm4<<endl<<"Item 5: $"<<Itm5<<endl;
    cout<<"Subtotal: $"<<sTot<<endl;
    cout<<"Sales Tax: $"<<Tx<<endl;
    cout<<"Amount Due: $"<<aDu<<endl;
    

    //Exit Stage Right
    return 0;
}

