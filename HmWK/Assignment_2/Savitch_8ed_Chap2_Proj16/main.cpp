/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: making code look better
 * Created on March 16, 2015, 9:32 AM
 */

//System Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!

int main(int argc, char** argv) {
    //Verify the variables
    float radius, volume;
    //Prompt for input
    cout<<"Enter radius of a sphere."<<endl;
    //Let them put in an input
    cin>>radius;
    //Calculate using the volume formula
    volume=(4.0/3.0)*3.1415*radius*radius*radius;
    //Present the results
    cout<<"The volume is "<<volume<<endl;
    
    return 0;
}