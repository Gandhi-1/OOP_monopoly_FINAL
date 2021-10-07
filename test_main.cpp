#include <iostream>
#include <vector>
#include <string>
#include "gameboard.h"
//#include "property.h"
#include "player.h"
using namespace std;


Game_Board adelaide_monopoly;

//creating 3 test players to test functionality of class. We will later turn this into an array which holds the players as objects and alternates them respectively by move;

Player Hugh("p1",1);
Player Dhyan("p2",2);
Player Irhas("p3",3);



//format = Property(string name, float price, float rent)

//keep this: I am commenting this out to get rid of errors as we need to incrementally test the files,.
// Property Start("collect 300", 0, -300);
// Property AdelaideUni("Adelaide Uni", 200, 40);
// Property FlindersUni("Flinders Uni", 150, 20);
// Property UniSA("UNISA", 155, 22.5);
// Property TAFE("TAFE", 160, 25);
// Property Jail("Jail");
// Property MountLofy("Mount Lofty", 250, 50);
// Property MountOsmond("Mount Osmond", 225, 45);
// Property MorialtaFalls("Morialta Falls", 230, 46.5);
// Property LinearParkTrail("Linear Park Trail", 245, 47);
// Property Chance("Chance");
// Property BurnsideVillage("Burnside Village", 225, 45);
// Property NorwoodParade("Norwood Parade", 185, 30);
// Property RundelMall("Rundel Mall", 300, 70);
// Property TTP("Tea Tree Plaza", 280, 60);
// Property Jail("Jail");
// Property RAH("RAH Hospital", 320, 80);
// Property AdelaideOval("Adelaide Oval", 300, 70);
// Property StBernards("St Bernards", 250, 50);
// Property Hindley("Hindley Club", 275, 55);

//Property *property[20];
int main()
{

    //we will later print this out in a function and organise information. 
    cout<<Hugh.get_name()<< " has a bank account balance of "<<Hugh.get_balance()<< " dollars "<<endl;
    cout<<Hugh.get_name()<<" owns the following properties: "<<endl;
    Hugh.get_properties();
    adelaide_monopoly.Display_Board();
    return 0;
}


