/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Make a pretty letter with letters
 * Created on March 4, 2015, 10:13 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins now!
    int main(int argc, char** argv) {
    //Declare the variables    
    char c;
    //Prompt for input
    cout<<"Input a single letter\n";
    cin>> c;
    //Output the image
    cout << endl << endl;
    cout<<" " << c << c << c << c <<endl;
    cout<< c << c << "  " << c << c <<endl;
    cout<< c<<endl;
    cout<< c<<endl;
    cout<< c<<endl;
    cout<< c << c << "  " << c << c << endl;
    cout<<" " << c << c << c << c <<endl;
    
    return 0;

}