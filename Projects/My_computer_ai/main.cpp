/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 13, 2015, 8:14 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Variables
    srand(static_cast<int>(time(0)));
    //different dice rolls for player and opponent, 2 sets, one for hitting
    //one for damage rolls. If i were smarter i could probably reduce it to just
    //the two dice rolls lol
    int roll1=(rand()%6)+1,roll2=(rand()%6)+1,roll3=(rand()%6)+1,
            roll4=(rand()%6)+1,roll5=(rand()%6)+1,roll6=(rand()%6)+1,
            roll7=(rand()%6)+1,roll8=(rand()%6)+1;    
    bool computer;
    char roll;
    int toHit,Droll,NDroll,attk=7,Dmg=10,comp_Hp=30,compatk=5,def=15,comp_dmg=10,PlayHp=50;
    
    //do{
        computer=false;    
    do{
    //Initiate the roll to Hit
    cout<<"Its your turn to attack!"<<endl;    
    cout<<"Roll to hit!"<<endl;
    cout<<"Enter R then hit enter"<<endl;
    cin>>roll;
    if (roll=='r'||roll=='R'){
        Droll=roll1+roll2;
    }
    cout<<"You rolled a "<<Droll<<endl;
    toHit=Droll+attk;
    cout<<" added to your attack modifer"
                    " you got a total of "<<toHit<<endl;
    //If the player hits
                if (toHit>=12){
                //Roll for Damage
                cout<<"You hit!"<<endl;
                cout<<"Roll for Damage!"<<endl;
                cout<<"Enter R then hit enter"<<endl;
                cin>>roll;
                if (roll=='r'||roll=='R'){
                NDroll=roll3+roll4;
                }
                
                cout<<"You rolled a "<<NDroll<<endl;
                Dmg=NDroll+Dmg;
                cout<<"Your Damage total is "<<Dmg<<endl;
                comp_Hp-=Dmg;
                //If the damage is enough to kill the target
                if (Dmg>=15){
                cout<<"You hit the target for "<<-(comp_Hp)<<" damage!"<<endl;
                cout<<"The target is dead!"<<endl;
                //if they dont hit hard enough
                }else
                    cout<<"You didnt hit hard enough! The target lives!"<<endl;
                }

    //If the player misses            
            else{
                cout<<"You missed!"<<endl;
            }
    cout<<"The opponents health is at "<<comp_Hp<<endl;
    //Switching to the computer if the computer lives
    if(comp_Hp>0){
        computer=true;
        cout<<"Its the opponents turn!"<<endl;
        cout<<"The opponent tries to attack!"<<endl;
        cout<<"Press R to have them roll"<<endl;
        cin>>roll;
        compatk+=roll5+roll6;
        cout<<"The opponent rolled a "<<roll5+roll6<<"!"<<endl;
        cout<<"The total they have is "<<compatk<<endl;
        if (compatk>=10){
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
        cout<<"You win!"<<endl;
    }else 
        cout<<"You died!"<<endl;
 



    return 0;
}
