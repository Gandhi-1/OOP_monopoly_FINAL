#include <iostream>
#include <string>
#include "player.h"
using namespace std;

Player::Player(string Name, int num)
{

    //a player can own a maximum of 20 properties. 
    properties_owned[20];
    playerName = Name; 
    playerBalance = 1500;
    position = 0;
    player_num = num;
}

int Player::get_number(){
    return player_num;
}

void Player::get_properties(){
      for(int i = 0; i<20; i++){
        //prints of all the non-empty array elements. 
        if(properties_owned[i]!="\0")
          cout<<properties_owned[i]<<endl;
      }
}

int Player::set_position()
{
    //has dice roll built into this functoin so that we don't have to constantly call other classes.
    position += rand() % 12 + 1;
    //it is in our best interest to minimise the amount of object calls. 
    if (position >= 19)
    {
        //if the player has passed board, we reset the position.
        position -= 19;
        cout << "congratualtions for passing Go " << playerName << "Centerlink awards you 200 AUD";
        return position;
        //(playerList[(*Player_Turn)]).change_balance(200);
    }
    return position;
}

string Player::get_name(){
    return playerName;
}

// function to change balance
void Player::change_balance(int balance){
    playerBalance += balance;
}

// function to return balance
int Player::get_balance(){
    return playerBalance;
}