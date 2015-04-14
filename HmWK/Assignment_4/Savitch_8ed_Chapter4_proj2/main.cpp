/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 *
 * Created on January 21, 2015, 10:07 PM
 */
//Same as problem one except your adding another car to compare it too

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
    float numltrs1, nummile1,numltrs2,nummile2, milesper1,milesper2;
    char answer;
    //Make it look fancy
    cout<<"This program will tell you how many miles per gallon\n";
    cout<<"you receive from the amount of liters used in two different\n";
    cout<<"cars, relative to how many miles the car traveled.\n";
    cout<<"It will also tell you which one is better.\n";
    //Ask for the inputs
    cout<<"Input the number of liters used in Car 1"<<endl;
    cin>>numltrs1;
    cout<<"Input the number of miles traveled for Car 1\n";
    cin>>nummile1;
    cout<<"Input the number of liters used in Car 2"<<endl;
    cin>>numltrs2;
    cout<<"Input the number of miles traveled for Car 2\n";
    cin>>nummile2;
    //This is where it gets a little confusing, remember that what you get back
    //will be plugged in directly into what you need, as show below
    milesper1=Mpg(numltrs1,nummile1);
    milesper2=Mpg(numltrs2,nummile2);
    //This is to make sure its only two decimal places off
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //show the answer
    cout<<"You got "<<milesper1<<" miles per gallon in Car 1"<<endl;
    cout<<"And you got "<<milesper2<<" miles per gallon in Car 2"<<endl;
    if (milesper1<milesper2)
        cout<<"Car 1 has better gas milage then Car 2\n";
    else if (milesper1>milesper2)
        cout<<"Car 2 has better gas milage then Car 1\n";            
    //Notice the milesper
    //Set up the loop
    cout<<"Would you like to try a different amount?"<<endl;
    cout<<"Enter Y to run again, N to exit"<<endl;
    cin>>answer;
    while (answer=='Y'||answer=='y'){
        cout<<"Input the number of liters used in Car 1"<<endl;
        cin>>numltrs1;
        cout<<"Input the number of miles traveled for Car 1\n";
        cin>>nummile1;
        cout<<"Input the number of liters used in Car 2"<<endl;
        cin>>numltrs2;
        cout<<"Input the number of miles traveled for Car 2\n";
        cin>>nummile2;
        //This is where it gets a little confusing, remember that what you get back
        //will be plugged in directly into what you need, as show below
        milesper1=Mpg(numltrs1,nummile1);
        milesper2=Mpg(numltrs2,nummile2);
        //This is to make sure its only two decimal places off
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        //show the answer
        cout<<"You got "<<milesper1<<" miles per gallon in Car 1"<<endl;
        cout<<"You got "<<milesper2<<" miles per gallon in Car 2"<<endl;
        //Notice the milesper
        if (milesper1<milesper2)
        cout<<"Car 1 has better gas milage then Car 2\n";
        else if (milesper1>milesper2)
        cout<<"Car 2 has better gas milage then Car 1\n";  
        //Set up the loop
        cout<<"Would you like to try a different amount?"<<endl;
        cout<<"Enter Y to run again, N to exit"<<endl;
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
           