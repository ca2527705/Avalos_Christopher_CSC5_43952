/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Prime numbers
 * Created on March 30, 2015, 8:41 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int count;
    bool isPrime = false;
    
    for (count=3; count<=100;count++){
        isPrime = true;
        for (int count2=2;count2<count;count2++){
        //if((count%2)-1==0)
            
            if(count%count2==0)
                isPrime = false;
        }
    
    if(isPrime == true)
        cout << count << endl;
    }
    return 0;
    //Student aid helped me to solve it
}

