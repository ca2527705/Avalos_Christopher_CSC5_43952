/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Buoyancy
 * Created on March 25, 2015, 10:24 AM
 */
//System libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int main(int argc, char** argv) {
    //Verify the variables
    float weight,radius,volume,y=62.4,Fb;
    
    //Prompt for input of weight and radius of object
    cout<<"Input the weight of the object in pounds"<<endl;
    cin>>weight;
    cout<<"Input the radius of the object in feet"<<endl;
    cin>>radius;
    
    //Calculate
    volume=(4/3)*3.14*radius*radius*radius;
    Fb=volume*y;
    
    //Output the results
    cout<<"The buoyant force is "<<Fb<<endl;
    if (Fb>=weight){
        cout<<"The object will float in water"<<endl;
    }
    else
        cout<<"The object will not float in water"<<endl;
    
    
    return 0;
}

