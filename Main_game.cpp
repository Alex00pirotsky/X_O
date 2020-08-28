//
// Created by zeus on 28.08.2020.
//

#include "Main_game.h"
#include "other_stuff.h"


Main_Game:: Main_Game ()
{
    default_grid();
    default_closed();
}

void    Main_Game:: default_grid()
{
    char *tmp = "789456123";
    grid = make_double_array(3,9);
    for (int y = 0; y < 3; ++y)
    {
        for (int x = 0; x < 9; x+=3)
        {
            grid[y][x] = '[';
            grid[y][x+1] = *tmp;
            grid[y][x+2] = ']';
            *(tmp+=1);
        }
    }
}
void    Main_Game:: default_closed()
    {
        closed = new char[10];
        for (int i = 0; i < 10; ++i)
        {
            closed[i] = '.';
        }
    }
char    **Main_Game::Get_grid()
{
   return grid;
}
char    *Main_Game::Get_closed()
    {
        return closed;
    }
char    Main_Game::Get_ii_side() const
{
    return ii_side;
}
char    Main_Game::Get_hu_side() const
{
    return hu_side;
}
void    Main_Game::Set_grid(char **new_grid)
{
    this->grid = new_grid;
}
void    Main_Game::Set_closed(char *new_closed)
    {
        this->closed = new_closed;
    }
void    Main_Game::mark_closed(int dot, char what)
    {
        closed[dot] = what;
    }
void    Main_Game::mark_grid(int const *y_x,char what)
    {
        grid[y_x[0]][y_x[1]] = what;
    }
void    Main_Game::first_turn()
    {
        char side;
        cout << "Please Choose your side (X) or (O)" << endl;
        cin >> side;
        if (side == 'X' || side == 'x')
        {
            this->hu_side = 'X';
            this->ii_side = 'O';
        }
        else
        {
            this->hu_side = 'O';
            this->ii_side = 'X';
        }
    }