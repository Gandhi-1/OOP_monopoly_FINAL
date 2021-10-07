#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
//#include "gameboard.h"
using namespace std;

//Player  
class Player{
    public:
        //variables
        string properties_owned[20];
        string playerName; 
        int playerBalance;
        int position;
        int player_num;
        //class methods
        Player(string Name, int num);
        int get_number();
        void get_properties();
        int set_position();
        string get_name();
        //void change_balance();
        int get_balance();
        void change_balance(int balance);
};

#endif //PLAYER_H