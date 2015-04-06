/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Fractions of stocks
 * Created on April 6, 2015, 9:35 AM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User libraries

//Global constants

//Function prototypes

int main(int argc, char** argv) {
    //identify the variables, two inputs for numerator and denominator
    //they must both be int
    char answer;
    do{
    float nshares, pstk, pstkflt, totstkp;
    int pstknum, pstkden;
    
    //ask for inputs
    cout<<"Enter the Number of shares\n";
    cin>>nshares;
    cout<<"Enter the whole-dollar portion of the price\n";
    cin>>pstk;
    cout<<"Enter the fraction portions numerator\n";
    cin>>pstknum;
    cout<<"Enter the fraction portions denominator\n";
    cin>>pstkden;
    
    //different formulas for converting to what you need
    //single share price
    pstkflt=pstk+1.0f*pstknum/pstkden;
    
    //total stock price
    totstkp=nshares*pstkflt;
    
    //Output
    cout<<"Your total stock price is $"<<setprecision(4)<<totstkp<<endl;
    cout<<"Would you like to run it again?\n";
    cout<<"Enter Y to run it again, or any other key to exit\n";
    cin>>answer;
    }
    while (answer=='Y'||answer=='y');
    cout<<"Good Bye\n";
            
    return 0;
}

