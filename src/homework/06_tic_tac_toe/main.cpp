#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cin; using::cout; using std::string

int main() 
{
	TicTacToeManager manager;
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
		
		while(game.game_over() == false)
		{
			cin>>game;
			cout<<game;
		}	
		
		manager.save_game(game);
		manager.get_winner_total(o, x, t);
		int o, x, t;
		cout<<"O wins: "<<o;
		cout<<"X wins: "<<x;
		cout<<" Ties : "<<t<<"\n";

		first_player ="Z";
		cout<<"Do you wnat to quit? enter N";
		cin>>choice;
	}
	while(choice == 'N');

	cout<<manager;

	return 0;
}