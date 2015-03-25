/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Phone call charges
 * Created on March 25, 2015, 10:00 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Validate the variables
    int cost,time,length;
    char first,second;
    
    //Prompt for input
    //The day will be composed of two different inputs representing the different
    //days of the week
    cout<<"What day did you make the call? Input the first two letters of"
            " the week to enter"<<endl;
    cin>>first>>second;
    //Input for time in military notation
    cout<<"What time did you make the call at? Input the time in military"
            " notation"<<endl;
    cin>>time;
    //Input for length of call
    cout<<"How long was the call for? Input in minutes"<<endl;
    cin>>length;
    
    //setup for the different days of the week
    if (((first=='M'))||(second=='m')&&(second=='O')||second=='o'){
        if ((time>=800)&&(time<=1800))
        cost=length*.40;
        else
        cost=length*.25;
        }
    else if (((first=='T'))||(second=='t')&&(second=='U')||second=='u'){
        if ((time>=800)&&(time<=1800))
        cost=length*.40;
        else
        cost=length*.25;
        }
    else if (((first=='W'))||(second=='w')&&(second=='E')||second=='e'){
        if ((time>=800)&&(time<=1800))
        cost=length*.40;
        else
        cost=length*.25;
        }
    else if (((first=='T'))||(second=='t')&&(second=='h')||second=='H'){
        if ((time>=800)&&(time<=1800))
        cost=length*.40;
        else
        cost=length*.25;
        }
    else if (((first=='F'))||(second=='f')&&(second=='R')||second=='r'){
        if ((time>=800)&&(time<=1800))
        cost=length*.40;
        else
        cost=length*.25;
        }
    else if (((first=='S'))||(second=='s')&&(second=='a')||second=='A'){
        cost=length*.15;
        }
    else if (((first=='S'))||(second=='s')&&(second=='U')||second=='u'){
        cost=length*.15;
        }
    
    //show the results
    cout<<"You made a phone call on "<<first<<second<<" at "<<time<<endl;
    cout<<"That lasted "<<length<<" minutes"<<endl;
    cout<<"The total cost of your phone call will be $"<<cost<<" dollars"<<endl;
    
    return 0;
}