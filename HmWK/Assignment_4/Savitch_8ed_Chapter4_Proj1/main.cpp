/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 *
 * Created on January 21, 2015, 9:00 PM
 */

//System libraries
#include <iostream>

using namespace std;

//User Libraries

//Global constants

//Function prototypes
float Mpg(float numltrs, float nummile);
//The above function takes in the liters and converts it to gallons
//Then returns the gallons divided by the miles to give the MPG

int main(int argc, char** argv) {
    //Verify the variables
    float numltrs, nummile, milesper;
    char answer;
    //Make it look fancy
    cout<<"This program will tell you how many miles per gallon\n";
    cout<<"you receive from the amount of liters used in the car\n";
    cout<<"relative to how many miles the care traveled\n";
    //Ask for the inputs
    cout<<"Input the number of liters used"<<endl;
    cin>>numltrs;
    cout<<"Input the number of miles traveled\n";
    cin>>nummile;
    //This is where it gets a little confusing, remember that what you get back
    //will be plugged in directly into what you need, as show below
    milesper=Mpg(numltrs,nummile);
    //This is to make sure its only two decimal places off
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //show the answer
    cout<<"You got "<<milesper<<" miles per gallon"<<endl;
    //Notice the milesper
    //Set up the loop
    cout<<"Would you like to try a different amount?"<<endl;
    cout<<"Enter Y to run again, N to exit"<<endl;
    cin>>answer;
    while (answer=='Y'||answer=='y'){
            cout<<"Input the number of liters used"<<endl;
            cin>>numltrs;
            cout<<"Input the number of miles traveled\n";
            cin>>nummile;

            milesper=Mpg(numltrs,nummile);

            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);

            cout<<"You got "<<milesper<<" miles per gallon"<<endl;
            cout<<"Would you like to try a different amount?"<<endl;
            cin>>answer;
    }

    cout<<"Goodbye"<<endl;
    
    return 0;
}

//The function you plugged in
float Mpg(float numltrs, float nummile)
//Dont get confused here, try to keep it simple, the question gave you 
//the conversion rate, so just get the conversion and send it back done
{
    const float Gallon=0.264179*numltrs;
    
    return (Gallon/nummile);
    
}
           