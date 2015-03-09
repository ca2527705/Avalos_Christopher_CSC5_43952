/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Candy problem
 * Created on March 9, 2015, 10:17 AM
 */
//System Libraries
#include <iostream>
using namespace std;

//User libraries

//Global constants

//Function Prototypes

//Calculations begin now!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short weight,height,age;
    char mf;
    unsigned char cBar=230;
    float BMRFem,BMRMale,nCBars;
    //Prompt the user for input
    cout<<"How many candy bars will it take"<<endl;
    cout<<"to maintain your weight?"<<endl;
    cout<<"Input weight in lbs\n";
    cin>>weight;
    cout<<"Input height in inches\n";
    cin>>height;
    cout<<"Input age in years"<<endl;
    cin>>age;
    cout<<"Are you a boy or girl? Input as m or f\n";
    cin>>mf;
    //Calculates
    BMRFem=655+4.3*weight+4.7*height-4.7*age;
    BMRMale=66+6.3*weight+12.9*height-6.8*age;
    //if male or female
    nCBars=mf=='m'?BMRMale/cBar:BMRFem/cBar;
    //Output Results
    cout<<"Your weight = "<<weight<< " (lbs)\n";
    cout<<"Your height = "<<height<< " (inches)"<<endl;
    cout<<"Your age = "<<age<<" (years)"<<endl;
    cout<<"Your sex = "<<((mf=='m')?"Male":"Female")<<endl;
    cout<<"You can eat "<<nCBars<<" candy bars per/day"<<endl;
    
    return 0;
}

