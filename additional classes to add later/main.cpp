#include <iostream>
#include <vector>
#include <string>
#include "gameboard.h"
#include "property.h"
#include "player.h"
using namespace std;

// 1. Adelaide Uni
// 2. Flinders Uni
// 3. UNISA
// 4. TAFE
// 5. JAIL
// 6. Mount Lofty
// 7. Mount Osmond
// 8. Morialta Falls
// 9. Linear Park trail
// 10. Chance
// 11. Burnside Village
// 12. Norwood Parade
// 13. Rundel Mall
// 14. Tea tree Plaza
// 15. Got to Jail
// 16. RAH Hospital
// 17. Adelaide Oval
// 18. St Bernards F & V
// 19. Hindley Club
// oh and START

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

//creating a gameboard
Game_Board adelaide_monopoly;

//int player_count;
//int player_turn = 0;

void getPlayerInfo();
void mainMenu;
void make_move();
void board_Setup();

int main(void)
{

    //mainMenu();
    // getPlayerInfo();
    // board_setup();
    //I have commented this out to test basic features by creaing player objects seperately to see if the board will work
    //Player *playerList = adelaide_monopoly.createPlayers(player_count);
    //printing off board to test.
    adelaide_monopoly.Display_Board();
    make_move();
}


void getPlayerInfo()
{
    cout << "How many players will there be? (1-6)" << endl;
    cin >> player_count;
    //    system("clear"); -> clear output terminal.
    while (player_count > 6 || player_count < 1)
    {
        cout << "Invalid number! Please enter a number from 1 to 6!" << endl;
        cout << "Enter player count:" << endl;
        cin >> player_count;
    }
}
void mainMenu()
{

    char input;

    cout << "Welcome to Adelaide Monopoly" << endl;
    cout << "----------------------------" << endl;
    cout << "  Press 1 -> Start a Game!" << endl;
    cout << "  Press 2 -> Quit the Game!" << endl;

    cin >> input;

    while (input != '1' && input != '2')
    {
        cout << "You inputted the wrong number, try again!" << endl;

        cin >> input;
    }

    if (input == '1')

    {
        getPlayerInfo();
    }

    else
    {
        exit(3);
    }
    return;
}
//::global_variable
void board_setup()
{
    //creating a gameboard
    
    
}


void make_move(){
    //we are saving this as a pointer as we want to be able to access Player_Turn from other files. this tells us which player's move it is
    adelaide_monopoly.Display_Board();
    int *Player_Turn = &player_turn;
    //player_turn tells us which players move it is, and can be modified normally
    player_turn+=1;
    if(player_turn > player_count) player_turn = 0; //resets the player turn back to zero if player has made move;
    
}
