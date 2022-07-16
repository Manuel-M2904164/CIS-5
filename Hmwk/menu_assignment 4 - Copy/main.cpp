/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2021, 10:41 AM
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
#include <cstring>
#include <string>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0 Gaddis_9thEd_Chap5_Prob1_Sum"<<endl;
        cout<<"Problem 1 Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
        cout<<"Problem 2 Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
        cout<<"Problem 3 Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
        cout<<"Problem 4 Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
        cout<<"Problem 5 Savitch_9thEd_Chap4_Prob1_MPG"<<endl;
        cout<<"Problem 6 Savitch_9Ed_Chap4_Prob2_FuelEff"<<endl;
        cout<<"Problem 7 Savitch_9Ed_Chap4_Prob4_Inflation"<<endl;
        cout<<"Problem 8 Savitch_9Ed_Chap4_Prob5_EstCost"<<endl;
        cout<<"Problem 9 Savitch_9Ed_Chap4_Prob9_2or3Max"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:{
                //Set the random number seed
    
    //Declare Variables
    int A,
    sum;
    
    //Initialize Variables
    sum=0;
    cin>>A;
    
    //Map inputs to outputs -> The Process
    for (int i=1; i <= A; i++){
        sum+=i;
    }
   
    //Display the outputs
    cout<<"Sum = "<<sum;
            break;}
            case 1:{
   //Declare Variables
    int nDays;
    int totSum=0;
    int cent;
    
    //Initialize or input i.e. set variable values
    cent=1;
    cin>>nDays;
    
    
    for (int i=1;i<=nDays;i++){
        totSum+=cent;
        cent*=2;
    }
    
    //Map inputs -> outputs
    int dollar = totSum/100;
    int change = totSum%100;
    cout<<"Pay = $"<<dollar<<"."<<(change<10?"0":"")<<change;
            break;}
            case 2:{
   float BkBlnc;
    float NmbCks;
cin>>BkBlnc>>NmbCks;
//Declare Variables
    int A,//entered value
    Mn,//smallest number
    Mx;//biggest number
    
    //Initialize or input i.e. set variable values
    cin>>A;
    Mn=Mx=A;
    while (A != -99){
        if (A<Mn){
            Mn=A;
        }
        if (A>Mx){
            Mx=A;
        }
        cin>>A;
    }
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<Mn<<endl;
    cout<<"Largest  number in the series is "<<Mx;
            break;}
            case 3:{
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

            break;}
            case 4:{
        //Declare Variables
      int A;//number of letters
      int B;
      
    
    //Initialize or input i.e. set variable values
    cin>>A;
    B=A-1;
    
    //Map inputs -> outputs
    for (int i = 0; i<A; i++){
        for (int j = 0; j<=i; j++){
            cout<<"+";
        }
        cout<<endl<<endl;
    }
    for (int i = 0; i<A; i++){
        for (int j = A; j>i; j--){
            cout<<"+";
        }
        if (i<B){
        cout<<endl<<endl;
        }
    }
            break;}
            case 5:{
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
            break;}
            case 6:{
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
            break;}
            case 7:{
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
            break;}
            case 8:{
    float P1,//price P1
    P2,//price P2
    inf,//inflation
    perInf,//percentinf Conversions
    infY1,//year one
    infY2;//year two
    char A; //again?
    
    //Initialize or input i.e. set variable values
    while (A!='n'){
        cout<<"Enter current price:"<<endl;
        cin>>P1;
        cout<<"Enter year-ago price:"<<endl;
        cin>>P2;
        inf=((P1-P2)/P2)*100;
        cout<<"Inflation rate: "<<fixed<<setprecision(2)<<showpoint<<inf<<"%"<<endl<<endl;
        perInf=inf/100;
        infY1=(P1*perInf)+P1;
        cout<<"Price in one year: $"<<infY1<<endl;
        infY2=(infY1*perInf)+infY1;
        cout<<"Price in two year: $"<<infY2<<endl<<endl;
        cout<<"Again:"<<endl;
        cin>>A;
        if (A!='n'){
            cout<<endl;
        }
    }
            break;}
            case 9:{
                //Declare Variables
    float A,//first number
    B,//second number
    C;//third number
    
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:"<<endl<<endl;
    cin>>A;
    cout<<"Enter Second number:"<<endl<<endl;
    cin>>B;
    cout<<"Enter third number:"<<endl<<endl;
    cin>>C;
    //Map inputs -> outputs
    cout<<"Largest number from two parameter function:"<<endl;
    if (B>A){
        swap (B, A);
    }
    cout<<A<<endl<<endl;
    cout<<"Largest number from three parameter function:"<<endl;
    if (B>C){
        swap (B, C);
    }
    if (A>C){
        swap (A, C);
    }
    cout<<C<<endl;
            break;}
            default:cout<<"Exiting the Menu"<<endl;
        break;}
    }while(choose>=0 && choose<=9);

    return 0;
}