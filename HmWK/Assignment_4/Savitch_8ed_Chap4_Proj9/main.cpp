/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Measurements
 * Created on January 24, 2015, 9:39 AM
 */
//System libraries
#include <iostream>

using namespace std;

//User libraries

//global constants

//Function prototypes

int hat(float,float);
int jacket(float,float,int);
int waist(float,int);
//The reason for using in is to make sure the number stay whole

int main(int argc, char** argv) {
    float age,weight,height;
    int jsize, hatsize,waistsz;
    
    cout<<"This program calculates you measurements for clothing height\n";
    cout<<"Enter the height\n";
    cin>>height;
    cout<<"Enter the weight\n";
    cin>>weight;
    cout<<"Enter the age\n";
    cin>>age;
    
    hatsize=hat(weight,height);
    jsize=jacket(height,weight,age);
    waistsz=waist(weight,age);

    
    cout<<"Your Jacket size should be "<<jsize<<" inches"<<endl;
    cout<<"Your hat size should be "<<hatsize<<" inches"<<endl;
    cout<<"Your waist size should be "<<waistsz<<" inches"<<endl;
    //ask to Loop it
    cout<<"Would you like to try a different measurement?"<<endl;
    cout<<"Enter Y for yes and N for no"<<endl;
    //Loop that shiznet
    char answer;
    cin>>answer;
    
    while (answer=='Y'||answer=='y'){
            cout<<"Enter the height\n";
            cin>>height;
            cout<<"Enter the weight\n";
            cin>>weight;
            cout<<"Enter the age\n";
            cin>>age;

            hatsize=hat(weight,height);
            jsize=jacket(height,weight,age);
            waistsz=waist(weight,age);


            cout<<"Your Jacket size should be "<<jsize<<" inches"<<endl;
            cout<<"Your hat size should be "<<hatsize<<" inches"<<endl;
            cout<<"Your waist size should be "<<waistsz<<" inches"<<endl;
            //ask to Loop it
            cout<<"Would you like to try a different measurement?"<<endl;
            cout<<"Enter Y for yes and N for no"<<endl;
            cin>>answer;
    }
    cout<<"Goodbye"<<endl;        
    
    return 0;
}
//Int is used across anything involving age because it asks for ONLY if the
//age is for every 10 years meaning 37, 42, 56 wont work. Only the whole
//numbers like 60, 50, 40. anything in between wont matter with using int
int hat(float weight, float height){
    return((weight/height)*2.9);
}

//Couldn't figure out why the numbers kept coming out funny so i just seperated
//it into two to make it easier for me
int jacket (float height, float weight,int age){

     age=(age-30)/10;
     return (((height*weight)/288)+(.125*age));
}
//For waist its every 2 years, thus the int again
int waist (float weight, int age){
    age=(age-28)/2;
    return ((weight/5.7)+(.1*age));
}

