/*
* File: main.cpp
* Author: Christopher Avalos
* Purpose: Converting 24hr to 12hr
* Created on April 20, 2015, 9:45 AM
*/
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global constants

//Function prototypes

void time(int&,int&);
//read the military time
void output(int,int);
//show it to them

int main(int argc, char** argv) {
    int timehr,timemin;
    time(timehr,timemin);
    output(timehr,timemin);
    return 0;
}

void time(int& timehr,int& timemin){
    using namespace std;
    cout<<"Insert the hr of the day in military time with two integers\n";
    cin>>timehr;
    cout<<"Insert the time in minutes with two integers\n";
    cin>>timemin;
}
void output(int ntimehr,int ntimemin){
    using namespace std;
    if (ntimehr<=12){
    cout<<"The time is "<<ntimehr<<":"<<ntimemin<<"AM"<<endl;
}
    
else if (ntimehr-=12){
    cout<<"The time is "<<ntimehr<<":"<<ntimemin<<"PM"<<endl;
    }
}