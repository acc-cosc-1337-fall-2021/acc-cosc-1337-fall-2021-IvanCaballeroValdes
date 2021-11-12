#include "tic_tac_toe.h"
#include <iostream>
#include <string>

using std::cin; using std::cout; using std::string;

int main() 
{
	string first_player;
	char choice;
	TicTacToe game;
	do
	{
		
		cout<<"Enter first player: ";
		cin>>first_player;
		int position;

		while(game.game_over() == false)
		{
			cout<<"Enter a position from 1-9: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}
		cout<<"Do you wnat to quit? enter N";
		cin>>choice;
	}
	while(choice == 'N');
	return 0;
}