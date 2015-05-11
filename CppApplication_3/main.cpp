/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 11, 2015, 10:07 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    ofstream fileout;
    
    fileout.open("output.dat");
    fileout<<"Hey"<<endl;
    cout<<"Data written to file"<<endl;
    fileout.close();
    
    ifstream filein;
    
    filein.open("output.dat");
    string word;
    filein>>word;
    cout<<word<<endl;
    

    return 0;
}

