/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Subject: Second Project
 * Created on May 27, 2015, 8:19 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;


//user libraries

//global constants

//function prototypes
short intro(short& pow,short& def,short& attk);

int main(int argc, char** argv) {
    short pow,def,attk;
    
    intro(pow,def,attk);
        
    //After their stats are either input or rolled, have them select their
    //opponents from the list
    cout<<"Please select your opponent\n";
    char choice;
    do{
    cout<<"Type 1 to fight a Grunt"<<endl;
    cout<<"Type 2 to fight a Leader"<<endl;
    cout<<"Type 3 to fight an Elite"<<endl;
    cout<<"Type 4 to fight The Butcher"<<endl;
    cin>>choice;

    switch(choice){
        case '1':{
                //Variables
                //different dice rolls for player and opponent, 2 sets, one for hitting
                //one for damage rolls. If i were smarter i could probably reduce it to just
                //the two dice rolls lol   
                bool computer;
                char roll;
                int toHit,eRoll,etohit,Droll,NDroll,Dmg,comp_Hp=15,comp_dmg=10,compatk=5,PlayHp=50;

                cout<<"A Grunt decides to pick a fight!"<<endl;                 
                    computer=false;    
                do{
                srand(static_cast<int>(time(0)));
                int roll3=(rand()%6)+1,roll4=(rand()%6)+1,roll5=(rand()%6)+1,
                    roll6=(rand()%6)+1,roll7=(rand()%6)+1,roll8=(rand()%6)+1,
                    roll9=(rand()%6)+1,roll10=(rand()%6)+1; 
                //Initiate the roll to Hit  
                cout<<"Its your turn, Roll to hit!"<<endl;
                cout<<"Enter R then hit enter"<<endl;
                cin>>roll;
                if (roll=='r'||roll=='R'){
                    Droll=roll3+roll4;
                }
                cout<<"You rolled a "<<Droll;
                toHit=Droll+attk;
                cout<<"! Added to your attack modifer of "<<attk<<
                       " you got a total of "<<toHit<<endl;
                //If the player hits
                            if (toHit>=12){
                            //Roll for Damage
                            cout<<"You hit!"<<endl;
                            cout<<"Roll for Damage!"<<endl;
                            cout<<"Enter R then hit enter"<<endl;
                            cin>>roll;
                            if (roll=='r'||roll=='R'){
                            NDroll=roll5+roll6;
                            }
                            cout<<"You rolled a "<<NDroll<<endl;
                            Dmg=NDroll+pow;
                            cout<<"Your Damage total is "<<Dmg<<endl;
                            comp_Hp-=Dmg;
                //If the player misses            
                            }else{
                            cout<<"You missed!"<<endl;
                        }
                cout<<"The opponents health is at "<<comp_Hp<<endl;
                //Switching to the computer if the computer lives or player misses
                    if(comp_Hp>0){
                    cout<<"You didnt hit hard enough! The target lives!"<<endl;        
                    computer=true;
                    cout<<"Its the opponents turn!"<<endl;
                    cout<<"The opponent tries to attack!"<<endl;
                    cout<<"Press R to have them roll"<<endl;
                    cin>>roll;
                    eRoll=roll5+roll6;
                    cout<<"The opponent rolled a "<<roll5+roll6<<"!"<<endl;
                    etohit=eRoll+compatk;
                    cout<<"The total they have is "<<compatk+eRoll<<endl;
                    if (etohit>=def){
                        cout<<"The opponent managed to hit you!"<<endl;
                        cout<<"They are going to damage you now"<<endl;
                        cout<<"Press R to have them roll for damage"<<endl;
                        cin>>roll;
                        PlayHp-=(roll7+roll8+comp_dmg);
                        cout<<"The computer rolled a "<<roll7+roll8<<endl;
                        cout<<"The computer hits you for "<<roll7+roll8+comp_dmg<<endl;
                        cout<<"You have "<<PlayHp<<" Hit points left!"<<endl;
                    }
        
                else
                    cout<<"The computer missed!"<<endl;

                }
                else{
                    computer=false;
                }    
                }while (comp_Hp>=1);

                if (comp_Hp<=0){
                    cout<<"The target is dead!"<<endl;
                    cout<<"You win!"<<endl;
                }else 
                    cout<<"You died!"<<endl;
                    break;
        }
        case '2':{
            //Copy paste case 1 but change the comp variables to make them stronger
                bool computer;
                char roll;
                int toHit,eRoll,etohit,Droll,NDroll,Dmg,comp_Hp=20,comp_dmg=12,compatk=6,PlayHp=50;

                cout<<"A Leader decides to pick a fight!"<<endl;                 
                    computer=false;    
                do{
                srand(static_cast<int>(time(0)));
                int roll3=(rand()%6)+1,roll4=(rand()%6)+1,roll5=(rand()%6)+1,
                    roll6=(rand()%6)+1,roll7=(rand()%6)+1,roll8=(rand()%6)+1,
                    roll9=(rand()%6)+1,roll10=(rand()%6)+1; 
                //Initiate the roll to Hit  
                cout<<"Its your turn, Roll to hit!"<<endl;
                cout<<"Enter R then hit enter"<<endl;
                cin>>roll;
                if (roll=='r'||roll=='R'){
                    Droll=roll3+roll4;
                }
                cout<<"You rolled a "<<Droll;
                toHit=Droll+attk;
                cout<<"! Added to your attack modifer of "<<attk<<
                       " you got a total of "<<toHit<<endl;
                //If the player hits
                            if (toHit>=13){
                            //Roll for Damage
                            cout<<"You hit!"<<endl;
                            cout<<"Roll for Damage!"<<endl;
                            cout<<"Enter R then hit enter"<<endl;
                            cin>>roll;
                            if (roll=='r'||roll=='R'){
                            NDroll=roll5+roll6;
                            }
                            cout<<"You rolled a "<<NDroll<<endl;
                            Dmg=NDroll+pow;
                            cout<<"Your Damage total is "<<Dmg<<endl;
                            comp_Hp-=Dmg;
                //If the player misses            
                            }else{
                            cout<<"You missed!"<<endl;
                        }
                cout<<"The opponents health is at "<<comp_Hp<<endl;
                //Switching to the computer if the computer lives or player misses
                    if(comp_Hp>0){
                    cout<<"You didnt hit hard enough! The target lives!"<<endl;        
                    computer=true;
                    cout<<"Its the opponents turn!"<<endl;
                    cout<<"The opponent tries to attack!"<<endl;
                    cout<<"Press R to have them roll"<<endl;
                    cin>>roll;
                    eRoll=roll5+roll6;
                    cout<<"The opponent rolled a "<<roll5+roll6<<"!"<<endl;
                    etohit=eRoll+compatk;
                    cout<<"The total they have is "<<compatk+eRoll<<endl;
                    if (etohit>=def){
                        cout<<"The opponent managed to hit you!"<<endl;
                        cout<<"They are going to damage you now"<<endl;
                        cout<<"Press R to have them roll for damage"<<endl;
                        cin>>roll;
                        PlayHp-=(roll7+roll8+comp_dmg);
                        cout<<"The computer rolled a "<<roll7+roll8<<endl;
                        cout<<"The computer hits you for "<<roll7+roll8+comp_dmg<<endl;
                        cout<<"You have "<<PlayHp<<" Hit points left!"<<endl;
                    }
        
                else
                    cout<<"The computer missed!"<<endl;

                }
                else{
                    computer=false;
                }    
                }while (comp_Hp>=1);

                if (comp_Hp<=0){
                    cout<<"The target is dead!"<<endl;
                    cout<<"You win!"<<endl;
                }else 
                    cout<<"You died!"<<endl;
                    break;
        }
        case '3':{
                bool computer;
                char roll;
                int toHit,eRoll,etohit,Droll,NDroll,Dmg,comp_Hp=25,comp_dmg=12,compatk=7,PlayHp=50;

                cout<<"An Elite decides to pick a fight!"<<endl;                 
                    computer=false;    
                do{
                srand(static_cast<int>(time(0)));
                int roll3=(rand()%6)+1,roll4=(rand()%6)+1,roll5=(rand()%6)+1,
                    roll6=(rand()%6)+1,roll7=(rand()%6)+1,roll8=(rand()%6)+1,
                    roll9=(rand()%6)+1,roll10=(rand()%6)+1; 
                //Initiate the roll to Hit  
                cout<<"Its your turn, Roll to hit!"<<endl;
                cout<<"Enter R then hit enter"<<endl;
                cin>>roll;
                if (roll=='r'||roll=='R'){
                    Droll=roll3+roll4;
                }
                cout<<"You rolled a "<<Droll;
                toHit=Droll+attk;
                cout<<"! Added to your attack modifer of "<<attk<<
                       " you got a total of "<<toHit<<endl;
                //If the player hits
                            if (toHit>=14){
                            //Roll for Damage
                            cout<<"You hit!"<<endl;
                            cout<<"Roll for Damage!"<<endl;
                            cout<<"Enter R then hit enter"<<endl;
                            cin>>roll;
                            if (roll=='r'||roll=='R'){
                            NDroll=roll5+roll6;
                            }
                            cout<<"You rolled a "<<NDroll<<endl;
                            Dmg=NDroll+pow;
                            cout<<"Your Damage total is "<<Dmg<<endl;
                            comp_Hp-=Dmg;
                //If the player misses            
                            }else{
                            cout<<"You missed!"<<endl;
                        }
                cout<<"The opponents health is at "<<comp_Hp<<endl;
                //Switching to the computer if the computer lives or player misses
                    if(comp_Hp>0){
                    cout<<"You didnt hit hard enough! The target lives!"<<endl;        
                    computer=true;
                    cout<<"Its the opponents turn!"<<endl;
                    cout<<"The opponent tries to attack!"<<endl;
                    cout<<"Press R to have them roll"<<endl;
                    cin>>roll;
                    eRoll=roll5+roll6;
                    cout<<"The opponent rolled a "<<roll5+roll6<<"!"<<endl;
                    etohit=eRoll+compatk;
                    cout<<"The total they have is "<<compatk+eRoll<<endl;
                    if (etohit>=def){
                        cout<<"The opponent managed to hit you!"<<endl;
                        cout<<"They are going to damage you now"<<endl;
                        cout<<"Press R to have them roll for damage"<<endl;
                        cin>>roll;
                        PlayHp-=(roll7+roll8+comp_dmg);
                        cout<<"The computer rolled a "<<roll7+roll8<<endl;
                        cout<<"The computer hits you for "<<roll7+roll8+comp_dmg<<endl;
                        cout<<"You have "<<PlayHp<<" Hit points left!"<<endl;
                    }
        
                else
                    cout<<"The computer missed!"<<endl;

                }
                else{
                    computer=false;
                }    
                }while (comp_Hp>=1);

                if (comp_Hp<=0){
                    cout<<"The target is dead!"<<endl;
                    cout<<"You win!"<<endl;
                }else 
                    cout<<"You died!"<<endl;
                    break;
        }
        case '4':{
                bool computer;
                char roll;
                int toHit,eRoll,etohit,Droll,NDroll,Dmg,comp_Hp=50,comp_dmg=16,compatk=9,PlayHp=50;

                cout<<"The Butcher decides to pick a fight!"<<endl;                 
                    computer=false;    
                do{
                srand(static_cast<int>(time(0)));
                int roll3=(rand()%6)+1,roll4=(rand()%6)+1,roll5=(rand()%6)+1,
                    roll6=(rand()%6)+1,roll7=(rand()%6)+1,roll8=(rand()%6)+1,
                    roll9=(rand()%6)+1,roll10=(rand()%6)+1; 
                //Initiate the roll to Hit  
                cout<<"Its your turn, Roll to hit!"<<endl;
                cout<<"Enter R then hit enter"<<endl;
                cin>>roll;
                if (roll=='r'||roll=='R'){
                    Droll=roll3+roll4;
                }
                cout<<"You rolled a "<<Droll;
                toHit=Droll+attk;
                cout<<"! Added to your attack modifer of "<<attk<<
                       " you got a total of "<<toHit<<endl;
                //If the player hits
                            if (toHit>=13){
                            //Roll for Damage
                            cout<<"You hit!"<<endl;
                            cout<<"Roll for Damage!"<<endl;
                            cout<<"Enter R then hit enter"<<endl;
                            cin>>roll;
                            if (roll=='r'||roll=='R'){
                            NDroll=roll5+roll6;
                            }
                            cout<<"You rolled a "<<NDroll<<endl;
                            Dmg=NDroll+pow;
                            cout<<"Your Damage total is "<<Dmg<<endl;
                            comp_Hp-=Dmg;
                //If the player misses            
                            }else{
                            cout<<"You missed!"<<endl;
                        }
                cout<<"The opponents health is at "<<comp_Hp<<endl;
                //Switching to the computer if the computer lives or player misses
                    if(comp_Hp>0){
                    cout<<"You didnt hit hard enough! The target lives!"<<endl;        
                    computer=true;
                    cout<<"Its the opponents turn!"<<endl;
                    cout<<"The opponent tries to attack!"<<endl;
                    cout<<"Press R to have them roll"<<endl;
                    cin>>roll;
                    eRoll=roll5+roll6;
                    cout<<"The opponent rolled a "<<roll5+roll6<<"!"<<endl;
                    etohit=eRoll+compatk;
                    cout<<"The total they have is "<<compatk+eRoll<<endl;
                    if (etohit>=def){
                        cout<<"The opponent managed to hit you!"<<endl;
                        cout<<"They are going to damage you now"<<endl;
                        cout<<"Press R to have them roll for damage"<<endl;
                        cin>>roll;
                        PlayHp-=(roll7+roll8+comp_dmg);
                        cout<<"The computer rolled a "<<roll7+roll8<<endl;
                        cout<<"The computer hits you for "<<roll7+roll8+comp_dmg<<endl;
                        cout<<"You have "<<PlayHp<<" Hit points left!"<<endl;
                    }
        
                else
                    cout<<"The computer missed!"<<endl;

                }
                else{
                    computer=false;
                }    
                }while (comp_Hp>=1);

                if (comp_Hp<=0){
                    cout<<"The target is dead!"<<endl;
                    cout<<"You win!"<<endl;
                }else 
                    cout<<"You died!"<<endl;
                    break;
        }
        default:{
            cout<<"exit?"<<endl;
        }
    }
    }while (choice>='1'&&choice<='4');
    //Exit stage right
    
    return 0;
}

short intro(short& pow,short& def,short& attk){
    //Mostly variables involving dice rolls and the random generator
    //rolls using D6
    int roll1=(rand()%6)+1,roll2=(rand()%6)+1,playHP=50;
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
    cout<<"Your chosen stats will be put into a file if you want to use it "
            "later"<<endl;
    fileout.open("Your_Stats.dat");
    fileout<<"Your Pow is = "<<pow<<"\r\n"
            <<"Your Def is = "<<def<<"\r\n"
            <<"Your Attk is = "<<attk<<endl;
    fileout.close();
    
    return 0;
}