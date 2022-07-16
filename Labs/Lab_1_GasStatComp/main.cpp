/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 25, 2022, 1:25 PM
 * Purpose: Calculate sales tax
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
    float cFue,//current fuel
            Tnk,//Size of tank
            Mpg,//MPG of vehicle
            gRq,//gallons Required
            Gs1,//gas station 1 fuel cost
            dGs1,//distance to gas station 1
            cFul1,//cost to fill up at station 1
            tDis1,//total distance driven station 1
            cDri1,//cost to drive to and from station 1
            Tot1,//total cost of filling up at station 1
            Ppg1,//Price per gallon when adding in mileage
            Gs2,//gas station 2 fuel cost
            dGs2,//distance to gas station 2
            cFul2,//cost to fill up at station 2
            tDis2,//total distance driven station 2
            cDri2,//cost to drive to and from station 2
            Tot2,//total cost of filling up at station 2
            Ppg2;//Price per gallon when adding in mileage

    
    //Initialize Variables
    cFue=.75;//percent of fuel
    Tnk=22;//22 gallon tank
    Mpg=17;//17 mpg
    Gs1=4.25;//$4.25 a gallon
    dGs1=10;//10 miles
    Gs2=4.09;//$4.09 a gallon
    dGs2=20;//20 miles
    
    //Map inputs to outputs -> The Process
    gRq=Tnk-(cFue*Tnk);
    cFul1=Gs1*gRq;
    tDis1=dGs1*2;
    cDri1=(tDis1/Mpg)*Gs1;
    Tot1=cFul1+cDri1;
    cFul2=Gs2*gRq;
    tDis2=dGs2*2;
    cDri2=(tDis2/Mpg)*Gs2;
    Tot2=cFul2+cDri2;
    Ppg1=Tot1/gRq;
    Ppg2=Tot2/gRq;

            
    
    //Display Results
    std::cout<<std::fixed;
    std::cout<<std::setprecision(2);
    cout<<"Gallons needed to fill up: "<<gRq<<endl;
    cout<<endl<<"Gas Station 1:"<<endl<<"Cost of regular gas = $"<<Gs1<<endl<<"Cost to fill up = $"<<cFul1<<endl;
    cout<<"Total miles driven back and forth = "<<tDis1<<endl<<"Cost of miles driven = $"<<cDri1<<endl<<"Total cost with mileage to gas station = $"<<Tot1<<endl;
    cout<<"Price per gallon when adding in mileage to the station = $"<<Ppg1<<endl;
    cout<<endl<<"Gas Station 2:"<<endl<<"Cost of regular gas = $"<<Gs2<<endl<<"Cost to fill up = $"<<cFul2<<endl;
    cout<<"Total miles driven back and forth = "<<tDis2<<endl<<"Cost of miles driven = $"<<cDri2<<endl<<"Total cost with mileage to gas station = $"<<Tot2<<endl;
    cout<<"Price per gallon when adding in mileage to the station = $"<<Ppg2<<endl;
    //Exit Stage Right
    return 0;
}

