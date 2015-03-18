/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Inflation Rate
 * Created on March 18, 2015, 10:19 AM
 */

//System Libraries
#include <iostream>
#include<iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Begin NOW
int main(int argc, char** argv) {
    //Validate variables
    float inflate, cost, years,yearsc;
    
    //Ask for the different inputs
    cout<<"How much does the item cost?"<<endl;
    cin>>cost;
    cout<<"How many years from now do you plan on buying more?"<<endl;
    cin>>years;
    cout<<"What is the current rate of inflation?"<<endl;
    cin>>inflate;
    //Convert the inflation rate to a decimal
    inflate=inflate/100;
    yearsc=years;
    //Calculate the price difference and loop it
    while (yearsc>0){
        cost=cost+inflate*cost;
        yearsc--;
    }
    
    //Output the results
    cout<<"The item will cost $"<<setprecision(3)<<cost<<" in "<<years<<" years"<<endl;

    return 0;

}