/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Homework
 * Created on March 16, 2015, 10:12 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    //declare variable
    int sum=0,sumneg=0,sumpos=0,sumeve=0,sumodd=0;
    int input;
    //Prompt for a value and sum it
    cout<<"Input an integer value!"<<endl;
    cin>>input;
    sum+=input;
    if(input>0)sumpos+=input;
    else sumneg+=input;
    if(input%2)sumodd+=input;
    else sumeve+=input;
    //Output the results
    cout<<"sum = "<<sum<<endl;
    cout<<"Positive sum = "<<sumpos<<endl;
    cout<<"negative sum = "<<sumneg<<endl;
    cout<<"even sum = "<<sumeve<<endl;
    cout<<"odd sum = "<<sumeve<<endl;
    
    return 0;
}