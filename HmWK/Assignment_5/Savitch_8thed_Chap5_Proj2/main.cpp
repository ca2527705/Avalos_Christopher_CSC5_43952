/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Waiting period
 * Created on April 22, 2015, 7:57 AM
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global constants

//Function Prototypes
void start (int&,int&);
void wait (int&,int&);
void endf (int,int,int,int);


int main(int argc, char** argv) {
    int hrs, min, endhrs, endmin,waithrs,waitmin;
    char answer;
    do{
        start (hrs,min);
        wait (waithrs, waitmin);
        endf (hrs, min,waithrs,waitmin);
        cout<<"Would you like to run a different time?\n";
        cout<<"Enter Y for yes\n";
        cin>>answer;
    }while (answer=='Y'||answer=='y');

        cout<<"Good-bye"<<endl;
    
       return 0;
}

void start (int& hrs, int& min){
    //ask for the hours and minutes at the start
    cout<<"Input the current time in 24 hour notation. First the hour"
            ", followed by the minutes\n";
    cout<<"Hours\n";
    cin>>hrs;
    cout<<"Minutes\n";
    cin>>min;
    cout<<"Your current time is "<<hrs<<":"<<min<<endl;
}
void wait (int& waithrs, int& waitmin){
    //As for the waiting time, pretty much whats up top in the start function
    cout<<"Input your wait time. First the hour"", followed by the minutes\n";
    cout<<"Hours\n";
    cin>>waithrs;
    cout<<"Minutes\n";
    cin>>waitmin;
    cout<<"Your current wait time is "<<waithrs<<":"<<waitmin<<endl;
}
void endf (int hrs, int min,  int waithrs, int waitmin){
    int endhrs,endmin;
    //Add the two hrs and two minutes together to get the time after waiting
        endhrs=waithrs+hrs;
        endmin=waitmin+min;
        if (endmin>=60){
            endmin-=60;
            endhrs+=1;
        }
        if (endhrs>24)
            endhrs-=24;
        cout<<"The time after waiting will be "<<endhrs<<":"<<endmin<<endl;
}