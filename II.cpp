//
// Created by zeus on 28.08.2020.
//

#include "II.h"

int     II:: one_turn_to_win()
{
    cout << (close_to_win(current_game->Get_ii_side())) << endl;
    return (close_to_win(current_game->Get_ii_side()));
}
int     II::block_hum()
{
    return ((current_game->Get_ii_side() == 'X') ? close_to_win('O') : close_to_win('X'));
}
int     II::check_1_3_7_9()
{
    char *tmp;
    tmp = current_game->Get_closed();
    if (tmp[1] == '.')
        return (1);
    if (tmp[3] == '.')
        return (3);
    if (tmp[7] == '.')
        return (7);
    if (tmp[9] == '.')
        return (9);
    return (0);
}
int     II::heart()
{
    char *tmp;
    tmp = current_game->Get_closed();
    if (tmp[5] == '.')
        return (5);
    free(tmp);
    return (0);
}
int     II::check_2_4_6_8()
{
    char *tmp;
    tmp = current_game->Get_closed();
    if (tmp[2] == '.')
        return (2);
    if (tmp[4] == '.')
        return (4);
    if (tmp[6] == '.')
        return (6);
    if (tmp[8] == '.')
        return (8);
    return (0);
}
int     II::where_turn()
{
    int res;
    res = 0;
    (res <= 0) ? res = one_turn_to_win() : 0;
    (res <= 0) ? res = block_hum() : 0;
    (res <= 0) ? res = check_1_3_7_9() : 0;
    (res <= 0) ? res = heart() : 0;
    (res <= 0) ? res = check_2_4_6_8() : 0;
    return (res);
}
II::II(Main_Game *game) : Win(game->Get_closed())
{
    this->current_game = game;
}
void II::make_turn()
{
    int dot;
    dot = where_turn();
    cout << "II go to the " << dot << endl;
    current_game->mark_closed(dot,current_game->Get_ii_side());
    current_game->mark_grid(convert(dot), current_game->Get_ii_side());
}

//1 == 2.1   //4 == 1.1     //7 == 0.1
//2 == 2.4   //5 == 1.4     //8 == 0.4
//3 == 2.7   //6 == 1.7     //9 == 0.7