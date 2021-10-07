#ifndef PROPERTY_H
#define PROPERTY_H
#include "player.h"
#include <iostream>
#include <string>
using namespace std;
class property{
    public: 
        bool owned;
        int num_house, num_hotel;
        string property_name;
        int Price;
        int Rent;
        string property_owner;
        string buy_this;
        Property():
        Property(string name, float price, float rent);
        void buy_property(Player buyer);
        void set_owner(Player owner);
        void ontile(Player player_on_tile):


};


#endif