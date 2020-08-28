//
// Created by zeus on 28.08.2020.
//

#include "Human.h"

Main_Game *curr_game;
void Human:: pr_open()
{
    for (int i = 1; i < 10; ++i)
    {
        if(curr_game->Get_closed()[i] == '.')
            cout << i << " ";
    }
    cout << endl;
}
Human:: Human(Main_Game *game) : Win(game->Get_closed())
{
    this->curr_game = game;
}
void Human:: make_turn()
{
    char tm;
    int dot;

    tm  = 0;
    dot = 0;
    cout << "Please enter where go, choose from :" << endl;
    pr_open();
    cin >> tm;
    if (tm <= '9' && tm > '0')
        dot = tm - '0';
    if (dot <= 9 && dot > 0 && curr_game->Get_closed()[dot] == '.')
    {
        curr_game->mark_closed(dot, curr_game->Get_hu_side());
        curr_game->mark_grid(convert(dot), curr_game->Get_hu_side());
    }
    else
        make_turn();
}
