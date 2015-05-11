/*
* File: main.cpp
* Author: Christopher Avalos
* Purpose: Game of 23
* Created on January 20, 2015, 10:25 AM
*/
//System libraries
#include <iostream>
using namespace std;
//User Libraries
//Global constants
//function prototypes
//Execution begins here
int main(int argc, char** argv) {
//declare variables
char thpick=23;
bool computer;
short nPckRm;
//Playing the game
do{
//designate the player
computer=false;
do{
//Ask player how many tooth picks to remove
cout<<"There are "<<static_cast<int>(thpick)<<" left to remove"<<endl;
cout<<"How many tooth picks do you want to remove?\n";
cout<<"Choose 1,2, or 3\n";
cin>>nPckRm;
}while (nPckRm<=0||nPckRm>=4||nPckRm>thpick);
//Remove the number of toothpicks
thpick-=nPckRm;
//Designate the computer
computer=true;
//Utilize logic from the book
if(thpick>4){
nPckRm=4-nPckRm;
thpick-=nPckRm;
}else if(thpick>=2&&thpick<=4){
thpick=1;
}else if(thpick==1){
thpick=0;
computer=false;
}
}while (thpick>1);
//output the winner and loser
if(computer){
cout<<"Computer wins, you lose"<<endl;
}else{
cout<<"Computer loses, you win!"<<endl;
}
//Exit the Game
return 0;
}