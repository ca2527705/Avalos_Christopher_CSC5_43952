/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Mad Lib
 * Created on March 18, 2015, 7:58 AM
 */

//System Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Name the variables
    string nameins,urname,food,num,adject,color,animal;
    //Ask for the input followed by actual cin>> operation
    cout<<"Input the following in order as requested.\n";
    cout<<"What is your instructor's name.\n";
    cin>>nameins;
    cout<<"What is your name?\n";
    cin>>urname;
    cout<<"Name a food item.\n";
    cin>>food;
    cout<<"Input a number between 100-120.\n";
    cin>>num;
    cout<<"Name an adjective.\n";
    cin>>adject;
    cout<<"Name a color.\n";
    cin>>color;
    cout<<"Name an animal.\n";
    cin>>animal;
    //Put it all into the mad lib
    cout<<""<<endl;
    cout<<"Dear Instructor "<<nameins<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time.\n"
    <<"First, I ate a rotten "<<food<<" which made me turn a color "
    <<color<<" and\n extremely ill. I came down with a fever of "<<num<<
    ". Next, my"<<adject<<"\n pet "<<animal<<" must have smelled the "
    "remains of the "<<food<<" on my homework,\n because he ate it. "
    "I am currently rewriting my homework\nand hope you will accept it"
    " late.\n";
    cout<<""<<endl;
    cout<<"Sincerely,\n"<<urname;

    return 0;
}