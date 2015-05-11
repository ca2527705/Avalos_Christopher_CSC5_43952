/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 *
 * Created on January 30, 2015, 9:04 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

//user libraries

//global constants

//function prototypes

using namespace std;


int main(int argc, char** argv) {
    //Mostly variables involving dice rolls and the random generator
    short pow,def,attk,tohit;
    //rolls using D6
    int roll1=(rand()%6)+1;
    int roll2=(rand()%6)+1;
    tohit=roll1+roll2+attk;
    //Used to determine the stats
    srand(time(0));
    //for file in/out
    ofstream fileout;
    ifstream filein;
    //Creating the character stats
    //Gives them an option to either roll randomly for their stats or to input
    //their own
    cout<<"Would you like to roll randomly for your stats or assign your own?\n";
    cout<<"Enter either Y for yes, or n to input your own\n";
    char answer;
    cin>>answer;
    //If they answer yes, Character creation is random using a 3 sided die and
    //added to the minimum modifier
    if (answer=='Y'||answer=='y'){
        do{
        cout<<"The following rolls will see what kind of stats you have"<<endl;
        //uses 3 sided die plus minimum result-1
        pow=(rand()%3)+11;
        def=(rand()%3)+14;
        attk=(rand()%3)+6;
        //show them the random results
        cout<<"Your Attack modifier is "<<attk<<endl;       
        cout<<"Your Defense is "<<def<<endl;
        cout<<"Your Pow is "<<pow<<endl;
        //Give them the option to reroll if they want
        cout<<"Are you okay with these stats?"<<endl;
        cout<<"Enter Y to accept and N to enter new stats"<<endl;
        cin>>answer;
    }while (answer=='n'||answer=='N');
    }
    //If they decide to put in their own stats, they will have to be within
    //a resonable range in order to prevent them from being "over powered"
    //The player will be asked to input entire for their pow, def, and attk
    else{
        cout<<"Please input your desired stats as requested\n";
        //If they put in an improper value, then ask them to but it in again
        do{
        cout<<"For your pow, enter a number between 10 and 16\n";
        cin>>pow;
        while (pow<10||pow>15){
            cout<<"Input a number between or equal to 10 and 16\n";
            cin>>pow; 
        }
        cout<<"For your def, enter a number between or equal to 14 and 16\n";
        cin>>def;
        while (def<14||def>16){
            cout<<"Input a number between 14 and 16\n";
            cin>>def;
        }
        cout<<"For your Attk, enter a number between or equal to 7 and 9\n";
        cin>>attk;
        while (attk<7||attk>9){
            cout<<"Input a number between or equal to 7 and 9\n";
            cin>>attk;
        }
        //show them their choosen results
        cout<<"These are your choosen stats: "<<endl;
        cout<<"Your Pow is "<<pow<<endl;
        cout<<"Your Def is "<<def<<endl;
        cout<<"Your Attk is "<<attk<<endl;
        //Give them the option to re input their stats if they want
        cout<<"Are you okay with these stats?"<<endl;
        cout<<"Enter Y to accept and N to enter new stats"<<endl;
        cin>>answer;
    }while (answer=='n'||answer=='N');
           
    }
    //Reserve this spot for the input into a file
    cout<<"Your chosen stats will be put into a file if you want to use it"
            "later"<<endl;
    fileout.open("Your_Stats.dat");
    fileout<<"Your Pow is = "<<pow<<"\r\n"
            <<"Your Def is = "<<def<<"\r\n"
            <<"Your Attk is = "<<attk<<endl;
    fileout.close();
    cout<<"Your stats have been recorded to a file!"<<endl;
    
    
    //After their stats are either input or rolled, have them select their
    //opponents from the list
    cout<<"Please select your opponent\n";
    char choice;
    bool computer;
    short compHP,playHP;
    do{
    cout<<"Type 1 to fight problem 1"<<endl;
    cout<<"Type 2 to fight problem 2"<<endl;
    cout<<"Type 3 to fight problem 3"<<endl;
    cout<<"Type 4 to fight the Cable Bill"<<endl;
    cin>>choice;

    //set up the menu for the different opponents
    switch(choice){
        case '1':{
            cout<<"Testing"<<endl;
            break;
        }
        case '2':{
            cout<<"Testing"<<endl;
            break;
        }
        case '3':{
            cout<<"Testing"<<endl;
            break;
        }
        case '4':{
            cout<<"Testing"<<endl;
            break;
        }
        default:{
            cout<<"exit?"<<endl;
        }
    }
    }while (choice>='1'&&choice<='4');
    

    return 0;
}
