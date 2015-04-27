/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * 
 * Created on April 27, 2015, 8:12 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

float rtirmnt (float,float,int,float);//for-loop

int main(int argc, char** argv) {
    //declare variables
    float pv=0.0f;//Present Value $'s
    float ir=0.05f;// Interest rate %/yr
    int nC=50;      //Number of compounding periods yr
    float fdep=0.1f;//babylonians say 10%
    float salary=36000;//salary $/year
    //calculate our Savings Required
    float savReq=salary/ir;//Savings Require $'s
    //Output all initial conditions
    
    cout<<"Investment Rate from munibonds = "<<ir*100<<"%"<<endl;
    cout<<"Salary =$"<<salary<<endl;
    cout<<"Yearly Retirement Saved = $"<<salary*fdep<<endl;
    cout<<"Savings Required to retire = $"<<savReq<<endl;
    cout<<endl<<"Year  Ret  Savings"<<endl;
    float retSav=0.0f;
    //output our yearly retirement savings
    for (int year=1;retSav<savReq;year++){
        retSav=rtirmnt(pv,ir,year,salary*fdep);
        cout<<setw(4)<<year<<setw(13)<<retSav<<endl;
    }
    //Exit stage Right
    return 0;
}

float rtirmnt (float p, float i, int n, float d){
    for (int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}
    
