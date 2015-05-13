/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 13, 2015, 8:14 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Variables

    
    char roll;  


    do{   
    srand(static_cast<unsigned int>(time(0)));
    int roll1=(rand()%6)+1,roll2=(rand()%6)+1;
    cout<<"Hit r"<<endl;
    cin>>roll;   
    cout<<roll1+roll2<<endl;
     
    }while (roll=='r');
    return 0;
}
