/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Free Fall Calculator
 * Created on March 2, 2015, 9:02 AM
 */
//system Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
float g=3.2174e1f,cnvFtmt=3.048e-1f;
//Acceleration in ft/sec^2, conversion from feet to meters
        
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float time,dist;
    //Prompt for time
    cout<<"Free Fall Problem\n"<<"Input the time in seconds"<<endl;
    cin>>time;
    //calculate the distance
    dist=g*1/2*time*time;
    //Output the Results
    cout<<"Distance fallen = "<<dist<<"(feet)"<<endl;
    cout<<"Distance fallen = "<<dist*cnvFtmt<<"(meters)"<<endl;
    //Exit stage right!
    
    return 0;
}

