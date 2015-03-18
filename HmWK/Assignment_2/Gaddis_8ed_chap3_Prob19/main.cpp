/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Estimating a Car payment
 * Created on March 18, 2015, 10:17 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    //Declare Variables
    float intRate=0.0319f;//capitalone.com
    float msrplus=4e4f;//;loan amount for buic avaneer
    char nPaymnt=60; //Number of Monthly payments
    //Calculate the monthly payments
    float temp=pow((1+intRate/12) ,nPaymnt);
    float mPay=intRate*temp*msrplus/(temp-1);
    //Output our car payment
    cout<<"Interest per year = "<<intRate*100<<endl;
    cout<<"Loan Amount = $"<<msrplus<<endl;

    return 0;
}
