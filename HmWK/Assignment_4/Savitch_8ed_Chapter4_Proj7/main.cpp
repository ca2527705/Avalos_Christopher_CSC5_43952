/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Something about gravity
 * Created on January 21, 2015, 11:13 AM
 */

#include <iostream>
#include <cmath>
//System libraries
using namespace std;

//User Libraries

//Global Constants
const float G=6.673e-8f;//Weak Force attraction cm^3/g/sec^2

//Function Prototypes
// F            M1              M2          D
float gravity(float mass1, float mass2, float dist);

int main(int argc, char** argv) {
    float mass1, mass2, dist,force;
    char answer;
    // float mEarth=5.972e24f//Mass of earth in Kilograms
    // float wtMark==188.of//Weight of mark in lbs
    // float rEarth=6.371e3;//radius of earth in kilometer
    // mEarth*=1e3;//Convert to grams -> 10^3g/Kg
    // float mMark=wtMark*453.59g/lb
    // rEarth*=(1e3f*1e2f);//10^3/km*10^2cm/m
    // Float dynes=attForc(mEarth,mMark,rEath);
    // float 1bs=dynes*1/4.44822e5f;//conversion 11b/4
    // cout<<"My weight in dynes = "<<dynes<<endl;
    // cout<<"My Weight in lbs = "<<
    
    cout<<"This program is designed to output the gravitational\n";
    cout<<"force between two objects.\n";
    cout<<"Input the mass of the first object\n";
    cin>>mass1;
    cout<<"Input the mass of the second object\n";
    cin>>mass2;
    cout<<"Now input the distance between both objects\n";
    cin>>dist;
    
    force=gravity(mass1,mass2,dist);
   
    
    cout<<"The gravitional force between the two objects comes out\n";
    cout<<"to be "<<force<<" dynes"<<endl;
    cout<<"Would you like to run it again with another set of masses?\n";
    cout<<"Enter Y for yes and N for no\n";
    cin>>answer;
    while (answer=='Y'||answer=='y'){
            cout<<"This program is designed to output the gravitational\n";
            cout<<"force between two objects.\n";
            cout<<"Input the mass of the first object\n";
            cin>>mass1;
            cout<<"Input the mass of the second object\n";
            cin>>mass2;
            cout<<"Now input the distance between both objects\n";
            cin>>dist;

            force=gravity(mass1,mass2,dist);


            cout<<"The gravitional force between the two objects comes out\n";
            cout<<"to be "<<force<<" dynes"<<endl;
            cout<<"Would you like to run it again with another set of masses?\n";
            cout<<"Enter Y for yes and N for no\n";
            cin>>answer;
    
}
    cout<<"Goodbye";

    return 0;
}

float gravity(float mass1, float mass2, float dist){
   
    return (G*mass1*mass2/dist/dist);

            
    
}