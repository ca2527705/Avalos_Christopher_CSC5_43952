/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Finance
 * Created on April 27, 2015, 9:03 AM
 */
//System libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User libraries

//Global Constants

//Function Prototypes
float blnPmnt(float,float,int,float);//For-Loop

//Execution Begins here
int main(int argc, char** argv) {
    //Declare variables
    float purPrce=1e4f;//purchase price $10k
    float dwnPymt=1e-1f;//down payment % of purchase price
    float intRate=3.29e-2;//Interest Rate /yr
    int nMnths=60;//Number of months
    float mnPmnt=1.6e2f;//Monthly Payment
    //Calculate the amount to finance
    float finance=purPrce*(1-dwnPymt);
    //Output all the initial conditions
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Purchase Price    = $"<<purPrce<<endl;
    cout<<"Down Payment      = $"<<purPrce*dwnPymt<<endl;
    cout<<"Interest Rate     =  "<<intRate*100<<"%"<<endl;
    cout<<"Months to Finance =  "<<nMnths<<endl;
    cout<<"Amount Finances   = $"<<finance<<endl;
    //Ballon Payment and Monthly Payment
    cout<<"Mnthly Payment    = $"<<mnPmnt<<endl;
    cout<<"Ballon Payment    = $"<<blnPmnt(finance,intRate/12,nMnths,mnPmnt)<<endl;
    //Exit Stage Right
    
    
    return 0;
}

//Ballon Payment Function
//Input
// f->Financed Amount $'s
// i->Interest Rate /month
// n->Number of months
// p->monthly Payment
//Output
// bln->Ballon Payment $'s
float blnPmnt(float f,float i,int n,float p){
    for(int month=1;month<n;month++){
        f*=(1+i);//Increase due to the interest rate
        f-=p;    //Decrease due to payment
    }
}