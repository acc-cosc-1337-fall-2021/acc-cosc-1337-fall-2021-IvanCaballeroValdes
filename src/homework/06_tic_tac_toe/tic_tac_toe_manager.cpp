//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe game)
{
    update_winner_count(game.get_winner);
    game.push_back(game);
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
    {
        x_wins++;
    }
    else if(winner == "O")
    {
        o_wins++;
    }
    else
    {
        ties++;
    }
}

void TicTacToeManager::get_winner_total(int& o, int& x, int&t)
{
    o = o_wins;
    x = x_wins;
    t = ties;
}

std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager)
{
    for(auto game: manager.game)
    {
        out<<game<<"\n";
    }

    return out;
}

