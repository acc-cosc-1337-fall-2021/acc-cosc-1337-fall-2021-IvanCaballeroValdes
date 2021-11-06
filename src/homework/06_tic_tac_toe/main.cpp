#include "tic_tac_toe.h"

using std::cin; using::cout; using std::string

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
			game.displey_board();
		}
		cout<<"Do you wnat to quit? enter N";
		cin>>choice;
	}
	while(choice == 'N')
	return 0;
}