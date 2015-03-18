/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Babylonian algorithm
 * Created on March 18, 2015, 10:11 AM
 */

//System Libraries

#include <iostream>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float number, guess, r,count=0;
    
    //Input a number
    cout<<"Input a number to estimate it's square root.\n";
    cout<<"The format fill be a positive float.\n";
    cin>>number;
    //First pass
    guess=number/2;
    do{
        r=number/guess;
        guess=(guess+r)/2;
        count++;
        //output the first pass
        cout<<"Loop "<<count<<" ";
        cout<<"Calculate the next guess -> "<<guess<<endl;
    //}while(guess!=r);//The books preference
    } while(abs(guess-r)>.01);
    
    //Exit stage right
    //Thanks to Dr.Lehr for answering this question in class during winter!
    return 0;
}