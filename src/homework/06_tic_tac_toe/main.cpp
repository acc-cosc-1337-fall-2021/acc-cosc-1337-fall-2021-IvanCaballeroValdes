#include "tic_tac_toe.h"

using std::cin; using::cout; using std::string

int main() 
{
	string first_player;
	char choice;
	TicTacToe game;
	do
	{
		while(!(first_player == "X" || first_player == "O"))
		{
			cout<<"Enter first player: ";
			cin>>first_player;
		}
		
		cout<<"Enter first player: ";
		cin>>first_player;
		int position;

		while(game.game_over() == false)
		{
			while(position < 1 || position > 9)
			{
				cout<<"Enter a position from 1-9: ";
				cin>>position;

			}
			
			game.mark_board(position);
			game.displey_board();
			position = 0;
		}
		first_player ="Z";
		cout<<"Do you wnat to quit? enter N";
		cin>>choice;
	}
	while(choice == 'N')
	return 0;
}