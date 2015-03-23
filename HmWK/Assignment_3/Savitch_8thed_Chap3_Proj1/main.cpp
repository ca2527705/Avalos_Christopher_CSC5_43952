/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Rock-Paper-Scissors
 * Created on March 23, 2015, 10:05 AM
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

int main(int argc, char** argv) {
    //Variables
    char Player1, Player2, answer;
    
    //Where the question is asked and then entered by the user
    cout<<"This is a game of rock, paper, scissors!\n";
    cout<<"When prompted, enter r for rock, p for paper, and s for scissors\n";        
    cout<<"Player 1 choose either rock, paper or scissors"<<endl;
    cin>>Player1;
    cout<<"Player 2 choose either rock paper or scissors"<<endl;
    cin>>Player2;
    
    //conditions where rock is chosen by player 1
    if ((Player1=='R'||Player1=='r')&&(Player2=='P'||Player2=='p')){
        cout<<"Player 1 chose Rock"<<endl;
        cout<<"Player 2 chose Paper"<<endl;
        cout<<"Paper beats Rock!"<<endl;
        cout<<"Player 2 wins!"<<endl;
    }
    else if ((Player1=='R'||Player1=='r')&&(Player2=='S'||Player2=='s')){
        cout<<"Player 1 chose Rock"<<endl;
        cout<<"Player 2 chose Scissors"<<endl;
        cout<<"Rock beats Scissors!"<<endl;
        cout<<"Player 1 wins!"<<endl;
    }
    else if ((Player1=='R'||Player1=='r')&&(Player2=='R'||Player2=='r')){
        cout<<"Player 1 chose Rock"<<endl;
        cout<<"Player 2 chose Rock"<<endl;
        cout<<"Its a tie!"<<endl;
    }
    //Conditions where paper is chosen by player 1
    else if ((Player1=='P'||Player1=='p')&&(Player2=='S'||Player2=='s')){
        cout<<"Player 1 chose Paper"<<endl;
        cout<<"Player 2 chose Scissors"<<endl;
        cout<<"Scissors beats Paper!"<<endl;
        cout<<"Player 2 wins!"<<endl;
    }
    else if ((Player1=='P'||Player1=='p')&&(Player2=='R'||Player2=='r')){
        cout<<"Player 1 chose Paper"<<endl;
        cout<<"Player 2 chose Rock"<<endl;
        cout<<"Paper beats Rock!"<<endl;
        cout<<"Player 1 wins!"<<endl;
    }
    else if ((Player1=='P'||Player1=='p')&&(Player2=='P'||Player2=='p')){
        cout<<"Player 1 chose Paper"<<endl;
        cout<<"Player 2 chose Paper"<<endl;
        cout<<"Its a tie!"<<endl;
    }
    //conditions where Scissors is chosen by player 1
    else if ((Player1=='S'||Player1=='s')&&(Player2=='R'||Player2=='r')){
        cout<<"Player 1 chose Scissors"<<endl;
        cout<<"Player 2 chose Rock"<<endl;
        cout<<"Rock beats Scissors!"<<endl;
        cout<<"Player 2 wins!"<<endl;
    }
    else if ((Player1=='S'||Player1=='s')&&(Player2=='P'||Player2=='p')){
        cout<<"Player 1 chose Scissors"<<endl;
        cout<<"Player 2 chose Paper"<<endl;
        cout<<"Scissors beats Paper!"<<endl;
        cout<<"Player 1 wins!"<<endl;
    }
    else if ((Player1=='S'||Player1=='s')&&(Player2=='S'||Player2=='s')){
        cout<<"Player 1 chose Scissors"<<endl;
        cout<<"Player 2 chose Scissors"<<endl;
        cout<<"Its a Tie!"<<endl;
    }
    //Ask to play again
        cout<<"Would you like to play again?"<<endl;
        cout<<"Enter Y for yes or N for no"<<endl;
        cin>>answer;
    //Repeat if yes
    while ((answer == 'Y')||(answer== 'y'))
    {
        cout<<"Player 1 choose either rock, paper or scissors"<<endl;
        cin>>Player1;
        cout<<"Player 2 choose either rock paper or scissors"<<endl;
        cin>>Player2;
        //conditions where rock is chosen by player 1
        if ((Player1=='R'||Player1=='r')&&(Player2=='P'||Player2=='p')){
            cout<<"Player 1 chose Rock"<<endl;
            cout<<"Player 2 chose Paper"<<endl;
            cout<<"Paper beats Rock!"<<endl;
            cout<<"Player 2 wins!"<<endl;
        }
        else if ((Player1=='R'||Player1=='r')&&(Player2=='S'||Player2=='s')){
            cout<<"Player 1 chose Rock"<<endl;
            cout<<"Player 2 chose Scissors"<<endl;
            cout<<"Rock beats Scissors!"<<endl;
            cout<<"Player 1 wins!"<<endl;
        }
        else if ((Player1=='R'||Player1=='r')&&(Player2=='R'||Player2=='r')){
            cout<<"Player 1 chose Rock"<<endl;
            cout<<"Player 2 chose Rock"<<endl;
            cout<<"Its a tie!"<<endl;
        }
        //Conditions where paper is chosen by player 1
        else if ((Player1=='P'||Player1=='p')&&(Player2=='S'||Player2=='s')){
            cout<<"Player 1 chose Paper"<<endl;
            cout<<"Player 2 chose Scissors"<<endl;
            cout<<"Scissors beats Paper!"<<endl;
            cout<<"Player 2 wins!"<<endl;
        }
        else if ((Player1=='P'||Player1=='p')&&(Player2=='R'||Player2=='r')){
            cout<<"Player 1 chose Paper"<<endl;
            cout<<"Player 2 chose Rock"<<endl;
            cout<<"Paper beats Rock!"<<endl;
            cout<<"Player 1 wins!"<<endl;
        }
        else if ((Player1=='P'||Player1=='p')&&(Player2=='P'||Player2=='p')){
            cout<<"Player 1 chose Paper"<<endl;
            cout<<"Player 2 chose Paper"<<endl;
            cout<<"Its a tie!"<<endl;
        }
        //conditions where Scissors is chosen by player 1
        else if ((Player1=='S'||Player1=='s')&&(Player2=='R'||Player2=='r')){
            cout<<"Player 1 chose Scissors"<<endl;
            cout<<"Player 2 chose Rock"<<endl;
            cout<<"Rock beats Scissors!"<<endl;
            cout<<"Player 2 wins!"<<endl;
        }
        else if ((Player1=='S'||Player1=='s')&&(Player2=='P'||Player2=='p')){
            cout<<"Player 1 chose Scissors"<<endl;
            cout<<"Player 2 chose Paper"<<endl;
            cout<<"Scissors beats Paper!"<<endl;
            cout<<"Player 1 wins!"<<endl;
        }
        else if ((Player1=='S'||Player1=='s')&&(Player2=='S'||Player2=='s')){
            cout<<"Player 1 chose Scissors"<<endl;
            cout<<"Player 2 chose Scissors"<<endl;
            cout<<"Its a Tie!"<<endl;
        }
        cout<<"Would you like to play again?"<<endl;
        cin>>answer;
        }
    //Say goodbye
    cout<<"Goodbye"<<endl;
    return 0;
}

