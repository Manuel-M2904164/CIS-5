/*

 * File:   main.cpp

* Author: Dr. Mark E. Lehr

* Created on January 2, 2019, 12:36 PM

* Purpose:  Creation of Template to be used for all

*           future projects

*/

 

//System Libraries

#include <iostream> 

#include<iomanip>//Input/Output Library

using namespace std;

 

//User Libraries

 

//Global Constants, no Global Variables are allowed

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

 

//Function Prototypes

 

//Execution Begins Here!

int main(int argc, char** argv) {

    //Set the random number seed

      float BkBlnc;

    float NmbCks;

   

 

cin>>BkBlnc>>NmbCks;

    //Declare Variables

 

if(BkBlnc<0)

{

    cout<<" account is overdrawn."<<endl;

}

else

{

      float MnFee = 10;

 

    float CkFee;

    float x;

    float LBlnc;

    float NBlnc;

   

  x =   NmbCks<20?.10://Ternary operator

             NmbCks<40?.08:

              NmbCks<60?.06:

               NmbCks>=60?.04:.04;

 

 

 

  cout<<"Monthly Bank Fees"<<endl;

cout<<"Input Current Bank Balance and Number of Checks"<<endl;

   

 

 

 

  LBlnc =   BkBlnc<400?15://Ternary operator

          BkBlnc>=400?0:0;

          

 

CkFee = NmbCks*x;

 

NBlnc = BkBlnc - (CkFee + LBlnc + MnFee);

 

//Initialize or input i.e. set variable values

cout<<fixed<<setprecision(2)<<showpoint;

cout<<"Balance     $"<<setw(9)<<BkBlnc<<endl;

cout<<"Check Fee   $"<<setw(9)<<CkFee<<endl;

cout<<"Monthly Fee $"<<setw(9)<<MnFee<<endl;

cout<<"Low Balance $"<<setw(9)<<LBlnc<<endl;

cout<<"New Balance $"<<setw(9)<<NBlnc;

    //Map inputs -> outputs

 

    //Display the outputs

}

    //Exit stage right or left!

    return 0;

}

