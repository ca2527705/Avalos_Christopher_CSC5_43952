/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Loan calculator
 * Created on March 17, 2015, 10:04 AM
 */
//System Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Begin calculation here
int main(int argc, char** argv) {
    //Declare variables
    float int_rate, durofln, cstamt, mthypay, totamt;
    char answer;
    //Set up the if/else statement
    cout<<"Would you like to calculate you interest rate?"<<endl;
    cout<<"Enter y if so, if not enter n"<<endl;
    cin>>answer;
    if (answer=='y')
    {
    
        do
    {
            cout<<"Enter the amount of money wanted, the interest rate, "
            <<"and the length of the loan period in years.\n";
            cin>>cstamt;
            cin>>int_rate;
            cin>>durofln;
            totamt=(cstamt*(int_rate/100))*durofln+cstamt;
            mthypay=totamt/(durofln*12);
            cout.setf(ios::fixed);
            cout.precision(2);
            cout<<"Your total cost will be $"<<totamt<<endl;
            cout<<"And your total monthly amount will be $ "<<mthypay<<endl;
            cout<<"Would you like to run the program again?\n";
            cin>>answer;
    
    
        }while (answer=='y');
    //Set it up the end if at any time they do not want it to run    
    cout<<"Goodbye"<<endl;
    
    } else
    cout<<"Goodbye"<<endl;
    
        return 0;
}