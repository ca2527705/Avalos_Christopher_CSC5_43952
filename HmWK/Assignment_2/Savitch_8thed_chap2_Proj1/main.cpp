/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose:Homework Project 1
 * Created on March 16, 2015, 9:39 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//execution begins here!
int main(int argc, char** argv) {
    //Identify the variables
    char ans;
    const float c_constant=35273.92;
    float c_tons, num_boxes, c_ounces;
    //setup the do/while statement
    do
    {
    //Input the needed varaibles
    cout<<"Please insert how many ounce of cereal you wish to convert "
            "to tons of cereal.\n";
    cin>>c_ounces;
    //Calculate the right formulas, make sure the math adds up
    c_tons=c_ounces/c_constant;
    num_boxes=c_constant/c_ounces;
    //Show the results
    cout<<"You have "<<c_tons<<" tons of cereal in "<<c_ounces<<
    " ounces"<<endl;
    cout<<"And need "<<num_boxes<<" boxes to yield one ton of cereal"<<endl;
    //Ask to run it again
    cout<<"Would you like to run a different amount?\n";
    cout<<"Enter y for yes and n for no, then press return.\n";
    cin>>ans;
    }while (ans=='y'||ans=='Y');
    //the program will continue to loop while the answer is 'y'
    //if the answer is no, then exit the program
    cout<<"Good-bye";            
    
    return 0;
} 