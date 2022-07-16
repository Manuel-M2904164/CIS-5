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
        cout<<"Problem 0 Gaddis_9thEd_Chap4_Prob8_SortNames"<<endl;
        cout<<"Problem 1 Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
        cout<<"Problem 2 Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;
        cout<<"Problem 3 Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
        cout<<"Problem 4 Gaddis_9thEd_Chap4_Prob23_ISP"<<endl;
        cout<<"Problem 5 Savitch_9thEd_Chap3_PracProb1_RockPaperScissors"<<endl;
        cout<<"Problem 6 Savitch_9thEd_Chap3_Prob3_Roman_Conversion"<<endl;
        cout<<"Problem 7 Savitch_9thEd_Chap3_PracProb4_CompatibleSigns"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:{
                //Set the random number seed
    
    //Declare Variables
    string a,
    b,
    c;
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>a>>b>>c;
    
    //Map inputs -> output
    if (a > c)
   swap(a, c);

    if (a > b)
   swap(a, b);

    if (b > c)
   swap(b, c);
            
    
    
    //Display the outputs
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c;
            break;}
            case 1:{
                //Declare Variables
    float bksPrc,//books purchased
    pntsAw,//points awarded
    tPnts;
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bksPrc;
    
    //Map inputs -> outputs
    if (bksPrc>=0)pntsAw=0;
    if (bksPrc>=1)pntsAw=5;
    if (bksPrc>=2)pntsAw=15;
    if (bksPrc>=3)pntsAw=30;
    if (bksPrc>=4)pntsAw=60;
    
    //Display the outputs
    cout<<"Books purchased =  "<<bksPrc<<endl;
    cout<<"Points earned   = "<<pntsAw;
            break;}
            case 2:{
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
}
            break;}
            case 3:{
                 //Declare Variables
    string Rn1,//runner 1
    Rn2,//runner2
    Rn3;//runner3
    int rn1T,//runner1time
    rn2T,//runner2time
    rn3T;//runner3time
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>Rn1>>rn1T;
    cin>>Rn2>>rn2T;
    cin>>Rn3>>rn3T;
    
    //Map inputs -> outputs
    if (rn1T > rn3T)
   swap(Rn1, Rn3), swap (rn1T, rn3T);

    if (rn1T > rn2T)
   swap(Rn1, Rn2), swap(rn1T, rn2T);
   
   if (rn2T > rn3T)
   swap(Rn2, Rn3), swap(rn2T, rn3T);
    
    //Display the outputs
    cout<<Rn1<<"\t"<<setw(3)<<rn1T<<endl;
    cout<<Rn2<<"\t"<<setw(3)<<rn2T<<endl;
    cout<<Rn3<<"\t"<<setw(3)<<rn3T;

            break;}
            case 4:{
                 //Declare Variables
    char Pkg;//Package
    float Hrs,//hours
    mthBll,//monthly Bill
    aHrs,//additional hours
    tBll;//total bill
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>Pkg>>Hrs;
    
    if (Pkg>=65){
        mthBll=9.95;
        aHrs=Hrs-10;
        if (Hrs>10){
            tBll=mthBll+(aHrs*2.00);
        }
        else tBll=mthBll;
    }
    if (Pkg>=66){
        mthBll=14.95;
        aHrs=Hrs-20;
        if (Hrs>20){
            tBll=mthBll+aHrs;
        }
        else tBll=mthBll;
    }
    if (Pkg>=67){
        mthBll=19.95;
        tBll=mthBll;
    }
    
    //Map inputs -> outputs
    
    
    //Display the outputs
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Bill = $ "<<tBll;
            break;}
            case 5:{
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
            break;}
            case 6:{
                //Declare Variables
    int arabic,n1000s,n100s,n10s,n1s,Yr;
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>arabic;
    Yr=arabic;
    
    //calculations
    //cout<<arabic<<"=";
    n1000s=arabic/1000;
    arabic-=n1000s*1000;
    n100s=arabic/100;
    arabic-=n100s*100;
    n10s=arabic/10;
    arabic-=n10s*10;
    n1s=arabic;
    //cout<<n1000s<<n100s<<n10s<<n1s<<endl;
    //Map inputs -> outputs
    if (Yr<1000||Yr>3000){
        cout<<Yr<<" is Out of Range!";
    }
    else {
        
        cout<<n1000s<<n100s<<n10s<<n1s<<" is equal to ";
         switch(n1000s){
        case 3:cout<<"M";
        case 2:cout<<"M";
        case 1:cout<<"M";
    }
    switch(n100s){
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<"D";break;
        case 4:cout<<"CD";break;
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";
    }
    switch(n10s){
        case 9:cout<<"XC";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<"L";break;
        case 4:cout<<"XL";break;
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"x";
    }
    switch(n1s){
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";
    }
    }
            break;}
            case 7:{
                //Declare Variables
    string S1,//sign 1
    S2,//sign 2
    E1,
    E2;
    
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>S1>>S2;
    
    //Map inputs -> outputs
    if(S1=="Aries"||S1=="Leo"||S1=="Sagittarius")E1="Fire";
    else if(S1=="Taurus"||S1=="Virgo"||S1=="Capricorn")E1="Earth";
    else if(S1=="Gemini"||S1=="Libra"||S1=="Aquarius")E1="Air";
    else if(S1=="Cancer"||S1=="Scorpio"||S1=="Pisces")E1="Water";
    
   if(S2=="Aries"||S2=="Leo"||S2=="Sagitarius")E2="Fire";
    else if(S2=="Taurus"||S2=="Virgo"||S2=="Capricorn")E2="Earth";
    else if(S2=="Gemini"||S2=="Libra"||S2=="Aquarius")E2="Air";
    else if(S2=="Cancer"||S2=="Scorpio"||S2=="Pisces")E2="Water";
    
    //Display the outputs
    if(E1==E2)cout<<S1<<" and "<<S2<<" are compatible "<<E1<<" signs.";
    else cout<<S1<<" and "<<S2<<" are not compatible signs.";

            }
            default:cout<<"Exiting the Menu"<<endl;
        break;}
    }while(choose>=0 && choose<=9);

    return 0;
}