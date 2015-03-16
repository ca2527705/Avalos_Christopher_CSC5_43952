/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Paycheck calculator
 * Created on March 16, 2015, 8:11 AM
 */
//System Libraries
#include <iostream>//i/o standard
#include <iomanip>//Formatting
#include <fstream>//writing to a file

using namespace std;

//User libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    ofstream out;//output the results to a file
    float pay,hrs,oTime=40.0f,oRate=1.5f,payrate;
    //open the file
    out.open("Payroll.dat");
    //Prompt for inputs
    cout<<"Input your current pay rate\n";
    cin>>payrate;
    cout<<"Input the amount of hours you've worked\n";
    cin>>hrs;
    //calculate the pay check
    pay=hrs<oTime?
        payrate*hrs:
        payrate*(hrs+(oRate-1)*(hrs-oTime));
    //output the results to the screen
    
    cout<<"Hours worked = "<<hrs<<"(hrs)"<<endl;
    cout<<"Current Pay Rate = $"<<payrate<<" per hour"<<endl;
    cout<<"Over time rate = $"<<oRate<<endl;
    cout<<"Over time begins at "<<oTime<<"(hrs)"<<endl;
    cout<<"You made $"<<pay<<" this paycheck"<<endl;
    //output results to a file
    out<<"Hours worked = "<<hrs<<"(hrs)"<<endl;
    out<<"Current Pay Rate = $"<<payrate<<" per hour"<<endl;
    out<<"Over time rate = $"<<oRate<<endl;
    out<<"Over time begins at "<<oTime<<"(hrs)"<<endl;
    out<<"You made $"<<pay<<" this paycheck"<<endl;
    //close the file
    out.close();

    return 0;
}

