/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Fried Twinkie Machine
 * Created on April 8, 2015, 7:52 AM
 */
//System Libraries
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

//User Libraries

//Function Prototypes

//Global constants

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    const int SIZE=80;
    char input[SIZE]="";
    unsigned short totChng=0,pTwnke=350;
    char nQtrs, nDimes, nNikels;
    //Prompt user for input
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This is a friend twinkie machine"<<endl;
    cout<<"Fried Twinkies cost $3.50"<<endl;
    cout<<"Input your change as "<<endl;
    cout<<"Dollar, Quarter, Dime, Nickles"<<endl;
    do{
        cout<<endl<<"Input coins/change"<<endl;
        cin>>input;
        if(strcmp(input,"Dollar")==0){
            totChng+=100;
        }else if(strcmp(input,"Quarter")==0){
            totChng+=25;
        }else if(strcmp(input,"Dime")==0){
            totChng+=10;
        }else if(strcmp(input,"Nickle")==0){
            totChng+=5;
        }else{
            cout<<"No Slugs Allowed\n";
        }
        cout<<"Total Change = $"<<totChng/100.0f<<endl;
    }while(totChng<350);
    //Give Twinkie
    cout<<endl<<"Here is your Fried Twinkie"<<endl;
    //Calculate the Change
    totChng-=pTwnke;
    cout<<"Your change is = $"<<totChng/100.0f<<endl;
    //How many quarters
    nQtrs=totChng/25;
    if(nQtrs>0)cout<<static_cast<int>(nQtrs)<<" Quarters change"<<endl;
    //How many Dimes
    totChng-=nQtrs*25;
    nDimes=totChng/10;
    if(nDimes>0)cout<<static_cast<int>(nDimes)<<" Dimes change"<<endl;
    //How many nickles
    totChng-=nDimes*10;
    nNikels=totChng/5;
    if(nNikels>0)cout<<static_cast<int>(nNikels)<<" Dimes change"<<endl;
    
    return 0;
}

