#this is our makefile to compile our code so that we don't have to manually compile it all. All header files need to be included as dependencies
#I have only included the files I think are necessary for our game to function in our  make file, feel free to add more after.
monopoly: main.cpp player.h player.cpp gameboard.h gameboard.cpp
	clang++ test_main.cpp player.cpp gameboard.cpp -o monopoly