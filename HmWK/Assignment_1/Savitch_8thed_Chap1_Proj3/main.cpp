/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 4, 2015, 9:51 AM
 */
//System Libraries
#include <iostream>
using namespace std;

//User libraries

//Global Constants

//Function Prototypes

//Execution begins now!

int main(int argc, char** argv) {
    int number_of_pods,peas_per_pod,total_peas;
    
    cout<<"Hello"<<endl;
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pod:\n";
    cin>>number_of_pods;
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    total_peas=number_of_pods/peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods.\n";
    cout<<"Goodbye.\n";
    
    return 0;
}