Change_log

==20/9/21== (Dhyan Darji)
-created a gameboard.cpp and headerfile alongside the main function.

==21/9/21== (Dhyan Darji)
-updated a gameboard.cpp, main function, gameboard.h

==24/9/21== (Dhyan Darji)
-created a main, header files and class function foundations developed. 
Most notably: main.cpp, player.cpp, tile.cpp (now redundant); house.cpp, hotel.cpp, gameboard.cpp, property.cpp


==24/9/21== (Dhyan Darji)
-created a main, header files and class function foundations developed. 
Most notably: main.cpp, player.cpp, tile.cpp (now redundant); house.cpp, hotel.cpp, gameboard.cpp, property.cpp

==28/9/21== (Dhyan Darji)
-created property and player class and header file. Updated gameboard class file and header file alongside main function.

==29/9/21== (Dhyan Darji)
-created chance class/header file. 
-created gotojail class/header file.
-created hotel class/header file.
-created house class/header file.
-created jail class/header file.
-created tile class/header file -> replaced property with a more generic tile class to allow for inheritance and virtual functions.
-updated property, player, gameboard class/header file alongside main function.

==30/9/21== (Hugh Signoriello)
-updated player class features to include set position, change_balance,get_name  
-debugging and clearing existing code
-Changed variable names for improved clarity

==1/10/21== (Dhyan Darji)
-updated tile, property, player, jail, house, hotel, gotojail, gameboard class/header file.

==1/10/21== (Hugh Signoriello)
-edit_main successfully runs player object class and gameboard class. 
-Game successfully runs. Now we need to slowly integarte the other classes into our main. Before we do anything we must ensure thay yhe classes are working. 

==3/10/21== (Hugh Signoriello)
-Updated Property class completely; the following are our methods
Property(string name, float price, float rent);
        void buy_property(Player buyer);
        void set_owner(Player owner);
        void ontile(Player player_on_tile);
methods one and two will perhaps be integrated into the one method to avoid errors later on. 
