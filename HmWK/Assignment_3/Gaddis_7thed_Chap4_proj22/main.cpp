/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Cable Bill
 * Created on March 25, 2015, 8:43 AM
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

int main(int argc, char** argv) {
    //identify the variables
    ofstream out;
    float vwdHrs;
    char package;//A,B,C
    const int SIZE=40;//Max size of name = 39 characters
    char name[SIZE];
    float bill;//cable bill in $'s
    //Open the file
    out.open("Cable.dat");
    //promt user for input
    cout<<"How many hours did you view this month?"<<endl;
    cin>>vwdHrs;
    cout<<"What is your package A,B,C"<<endl;
    cin>>package;
    cout<<"What is the customer's name?"<<endl;
    cin.ignore();
    cin.getline(name,SIZE);
    //Calculate the bill
    switch(package){
        case 'A':
        case 'a':{
            bill=9.95;
            if (vwdHrs>10)
                bill+=2*(vwdHrs-10);
            break;
        }
        case 'B':
        case 'b':{
            bill=14.95;
            if(vwdHrs>20)
                bill+=(vwdHrs-20);\
            break;
        }
        case 'C':
        case 'c':{
            bill=19.95;
            break;
        }
        default: cout<<"Wrong input"<<endl;
    };
    //output the results to the file
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Your Cable bill from the in class assignment"<<endl;
    out<<"Customer name: "<<name<<endl;
    out<<"Package: "<<package<<endl;
    out<<"Hours viewed :"<<vwdHrs<<endl;
    out<<"Amount Owed: $"<<bill<<endl;
    //close the file
    out.close();
    

    return 0;
}

