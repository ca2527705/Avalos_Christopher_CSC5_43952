/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Broken microwave
 * Created on March 30, 2015, 7:51 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//User libraries

//Function prototypes

//global constants
int main(int argc, char** argv) {
    //Verify the variables
    int number1,number2,number3;
    
    //Prompt for input
    cout<<"Input the desired temperature one number at a time\n";
    cin>>number1>>number2>>number3;
    
    //Change the numbers if its a 1,4, or 7
    if (number1==1||number1==4||number1==7)
    cout<<"You can use either "<<number1+1<<"00 or "<<number1-1<<"99 degrees\n";  
    
    else if(number2==1||number2==4||number2==7)
        cout<<"You can use either "<<number1<<number2+1<<"0 or "
            <<number1<<number2-1<<"9 degrees";
    
    else if (number3==1||number3==4||number3==7)
        cout<<"You can use either "<<number1<<number2<<number3+1<<" or "
            <<number1<<number2<<number3-1;
    
    //output normally if its not any of those number
    else
    cout<<"You input "<<number1<<number2<<number3<<" and will be set to that"
                " temperature\n";        

    return 0;
}

