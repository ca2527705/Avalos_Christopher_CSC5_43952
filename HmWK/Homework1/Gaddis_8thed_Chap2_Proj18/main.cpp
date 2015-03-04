/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: 2nd Homework
 * Created on March 4, 2015, 8:18 AM
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT=100;
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare the variables
    unsigned short nCust,nEDrnks,nCDrnks;
    unsigned char pEDrnks,pCDrnks;
    //input/Assign Values
    nCust=16500;//Number of customers
    pEDrnks=15;//Percentage energy drinkers
    pCDrnks=58;//percentage out of energy drinkers that like citrus flavor
    //process/Calculate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks;
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks;
    //Output Everything
    cout<<"Customer Survey Problem\n";
    cout<<"Known Given Values:\n";
    cout<<"Number of customers = "<<nCust<<endl;
    cout<<"Percentage of Energy Drinkers = "
            <<static_cast<int>(pEDrnks)<<"%"<<endl;
    cout<<"Percentage Citrus Drinkers/Energy Drinkers = "
            <<static_cast<int>(pCDrnks)<<"%"<<endl;
    cout<<"Calculated Values:\n";
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    //Exit over there
    return 0;
}

