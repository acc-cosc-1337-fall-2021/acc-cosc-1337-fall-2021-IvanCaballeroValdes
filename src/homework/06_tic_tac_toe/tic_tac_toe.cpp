//cpp
#include "tic_tac_toe.h"
using std:: cout;

bool TicTacToe::game_over()
{
    if(check_diagonal_win() || check_row_win() || check_column_win())
    {
        return true;
    }
    else if check_board_full()
    {
        player="C";
        return true;
    }
    return check_board_full();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

std::string TicTacToe::get_player()const
{
    return player;
}

void TicTacToe::display_board()
{
    for(std::size_t i=0; i < pegs.size(); i+=3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

void set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(std::size_t i=0, i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        pegs = " ";
    }
}

void TicTacToe::set_winner()
{
    f(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " "||
        pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ")
    {
        return true;
    }

    return false;
}

bool TicTacToe::check_row_win()
{
    for(int i=0; i<9; i+=3)
    {
        if(pegs[i] == pegs[i+1] && pegs[i+1] == pegs[i+2] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_column_win()
{
    for(int i=0; i< 3; i++)
    {
        if(pegs[i] == pegs[i+3] && pegs[1+3] == pegs[i+6] && pegs[i+6] != " ")
        {
            return true;
        }
    }
    return false;
}