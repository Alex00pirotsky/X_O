//
// Created by zeus on 28.08.2020.
//

#ifndef X_O_MAIN_GAME_H
#define X_O_MAIN_GAME_H

#include <iostream>
using namespace std;


class   Main_Game
{
private:
    char **grid;
    char *closed;
    char ii_side;
    char hu_side;
    void default_grid();
    void default_closed();
public:
    Main_Game();
    char **Get_grid();
    char *Get_closed();
    char Get_ii_side() const;
    char Get_hu_side() const;
    void Set_grid(char **new_grid);
    void Set_closed(char *new_closed);
    void mark_closed(int dot, char what);
    void mark_grid(int const *y_x,char what);
    void first_turn();
};

#endif //X_O_MAIN_GAME_H
