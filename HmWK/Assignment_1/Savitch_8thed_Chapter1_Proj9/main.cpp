/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Distance item travels
 * Created on February 25, 2015, 8:43 AM
 */
//System libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Identify the variables for input of time and the output of distance
    int time,dist;
    //Ask for input of time
    cout<<"Input time in seconds\n";
    cin>>time;
    //Calculate the distance traveled using the given formula
    dist=(32*(time*time))/2;
    //Output the distance traveled
    cout<<"In "<<time<<" seconds, the item would drop "<<dist<<" feet\n";
            

    return 0;
}

