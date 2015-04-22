/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 22, 2015, 10:32 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void output(int,int);
void time(int&,int&);
void start (int&,int&);
void wait (int&,int&);
void endf (int,int,int,int);

//Execution Begins Here

int main(int argc, char** argv) {
//Delcare your choice
char choice;
//General Menu Format Loop

    do{
//Display the selection
    cout<<"Type 1 to solve problem 1"<<endl;
    cout<<"Type 2 to solve problem 2"<<endl;
    cout<<"Type 3 to solve problem 3"<<endl;
    cout<<"Type 4 to solve problem 4"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
//Read the choice
    cin>>choice;
//Solve a problem that has been chosen.
switch(choice){
        case '1':{
            int timehr,timemin;
            time(timehr,timemin);
            output(timehr,timemin);
            
            break;
        }
        case '2':{
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
        break;
        }
        case '3':{

        break;
        }
        case '4':{

        break;
        }
        default:{
        cout<<"Exit?"<<endl;
}
    };
       }while(choice>='1'&&choice<='4');
        //Exit Stage right
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