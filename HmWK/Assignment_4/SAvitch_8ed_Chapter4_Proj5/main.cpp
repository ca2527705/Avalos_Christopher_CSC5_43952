/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose:Inflation + price change in years
 * Created on January 22, 2015, 8:25 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//User libraries

//Global Constants

//Function Prototypes
float inflate(float,float);
float cost(float,float);


int main(int argc, char** argv) {
    
    float Price1,Price2,diff,newcst;
    char answer;
    
    cout<<"This program is designed to show the inflation rate of an item\n";
    cout<<"using the price difference in a year\n";
    cout<<"Enter the Price of the item a year ago\n";
    cin>>Price1;
    cout<<"Enter the price of the item now\n";
    cin>>Price2;
    
    diff=inflate(Price1,Price2);
    newcst=cost(diff,Price2);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Your item had a rate of inflation of "<<diff*100<<"%"<<endl;
    cout<<"In one year, your item will cost $"<<newcst+Price2<<endl;
    cout<<"And in two years, your item will cost $"<<(newcst*2)+Price2<<endl;
    cout<<"Would you like to check another item?\n";
    cout<<"Enter Y for yes and N to exit";
    cin>>answer;
    
    while (answer=='Y'||answer=='y'){

            cout<<"Enter the Price of the item a year ago\n";
            cin>>Price1;
            cout<<"Enter the price of the item now\n";
            cin>>Price2;

            diff=inflate(Price1,Price2);
            
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            cout<<"Your item had a rate of inflation of "<<diff*100<<"%"<<endl;
            cout<<"Would you like to check another item?\n";
            cout<<"Enter Y for yes and N to exit";
            cin>>answer;
            }
    cout<<"Goodbye";
            
    
    return 0;
}

float inflate(float Price1,float Price2){
    return ((Price2-Price1)/Price1);
}

float cost(float Price2, float diff){
    return (diff*Price2);
}