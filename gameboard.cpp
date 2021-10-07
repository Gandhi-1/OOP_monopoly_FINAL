#include <cmath>
#include <iostream>
#include "gameboard.h"
#include <iomanip>
using namespace std;

//default constructor
Game_Board::Game_Board()
{
    //string user_pos[20] = {"p2"};
    
    string *user_pos = new string[20];
    user_pos[5] = "p1";
}


//this function will 
// Player Game_board::set_user_pos(Player player) {
//     //will update player position array to communicate this with the gameboard. 
//     int pos = player.get_position();
    
//     switch (*Player_Turn) {
//     case 1:
//         //we want to concatenate player position to either empty or prexisting index incase multiple players are on the same square.
//         user_pos[pos] += " p1";
//         break;
//     case 2:
//         user_pos[pos] += " p2";

//     }
// };


void Game_Board::Display_Board()
{
    //holds our properties.
    string array[20] = { "START", "Adelaide Uni", "Flinders Uni", "Uni SA", "Tafe", "Jail", "Mount lofty", "Mount osmond", "Morialta falls", "Linear park trail", "Chance", "Burnside Village", "Norwood Parade", "Rundel Mall", "Tea Tree Plaza", "Go to Jail", "RAH hospital", "Adelaide Oval", "St Bernards F&V", "Hindley club" };
    cout << "player p2's move" << endl;
    //the game board should access the values declared in the constructor
    cout << " ===========================================================================================================================================" << endl;
    cout << " |  ";
    for (int i = 0; i <= 5; i++)
    {
        cout << left << setw(20) << array[i] << "|  ";
    }
    cout << endl;
    cout << " |  ";
    for (int i = 0; i <= 5; i++)
    {
        cout << left << setw(20) << user_pos[i] << "|  ";
    }
    cout << endl;
    cout << " ===========================================================================================================================================" << endl;

    for (int i = 0; i < 4; i++)
    {
        //we add numbers for formatting. They seem random but they actually correspond to the amount of spaces needed for the array to line up.
        cout << " |  " << setw(20) << array[19 - i] << "|"
            << setw(92) << ""
            << "| " << setw(20) << array[i + 6] << "|" << endl;
        cout << " |  " << setw(20) << user_pos[19 - i] << "|"
            << setw(92) << ""
            << "| " << setw(20) << user_pos[i + 6] << "|  " << endl;
        if (i == 3)
        {
            cout << " ===========================================================================================================================================" << endl;
        }
        else
            cout << " ========================                                                                                            =======================" << endl;
    }
    cout << " |  ";
    for (int i = 0; i <= 5; i++)
    {
        cout << setw(20) << array[15 - i] << "|  ";
    }
    cout << endl;
    cout << " |  ";
    for (int i = 0; i <= 5; i++)
    {
        cout << setw(20) << user_pos[15 - i] << "|  ";
    }
    cout << endl;
    cout << " ===========================================================================================================================================" << endl;
    // string p1_properties[4] = {"Rundle Mall", "Hindley st strip club", "Preist P. Benidict's child care", "modbury centerlink"};
    // cout << "Properties owned by player 1: ";
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << setw(20) << p1_properties[i];
    // }
}

// int Game_Board::rollDice()
// {
//     int dice_roll = rand() % 12 + 1;
//     return dice_roll;
// }

// Player* Game_Board::createPlayers(int numPlayers)
// {
//     //creating an object array of type Player.
//     Player* playerList = new Player[numPlayers];

//     string tempName;

//     for (int i = 0; i < numPlayers; i++)
//     {
//         system("clear");
//         cout << "Enter Player " << i + 1 << " Name: " << endl;
//         cin >> tempName;
//         playerList[i].setName(tempName);
//     }

//     for (int i = 0; i < numPlayers; i++)
//     {
//         //declaring a starting balance of 1500
//         playerList[i].change_balance(1500);
//     }
//     return playerList;
//}
//we should move this outside of gameboard later on as it is unecesary.

 //lets not use player tokens yet, they are unecessary as we will use p1, p2 etc to format positions on the board.
    // cout << "Time to enter your in game token!" << endl;
    // cout << "Options include: " << endl;

    // for (int i = 0; i < numPlayers; i++)
    // {
    //     system("clear");
    //     cout << "Enter Player " << i + 1 << " Token: " << endl;
    //     cin >> tempName;
    //     playerList[i].setToken(tempName);
    // }