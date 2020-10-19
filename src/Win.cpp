//
// Created by zeus on 28.08.2020.
//

#include "../headers/Win.h"



Win:: Win(char *new_closed)
    {
        this->closed = new_closed;
    }

bool        Win::check_win(char side)
{
    if (closed[1] == side && closed[5] == side && closed[9] == side)
        return true;
    if (closed[3] == side && closed[5] == side && closed[7] == side)
        return true;
    for (int i = 1; i < 9; i+=3)
    {
        if (closed[i] == side && closed[i+1] == side && closed[i+2] == side)
            return true;
    }
    for (int i = 1; i <= 3; i++)
    {
        if (closed[i] == side && closed[i+3] == side && closed[i+6] == side)
            return true;
    }
    return false;
}
int         Win::close_to_win(char side)
{
    for (int i = 1; i < 10; ++i)
    {
        if (closed[i] == '.')
        {
            closed[i] = side;
            if (check_win(side))
            {
                closed[i] = '.';
                return (i);
            }
            else
                closed[i] = '.';
        }
    }
    return (0);
}
int*        Win::convert(int dot)
{
    int *y_x;
    y_x = new int[2];
    (y_x[1] <= 0 && dot == 1) ? y_x[0] = 2 , y_x[1] = 1: 0;
    (y_x[1] <= 0 && dot == 2) ? y_x[0] = 2 , y_x[1] = 4: 0;
    (y_x[1] <= 0 && dot == 3) ? y_x[0] = 2 , y_x[1] = 7: 0;
    (y_x[1] <= 0 && dot == 4) ? y_x[0] = 1 , y_x[1] = 1: 0;
    (y_x[1] <= 0 && dot == 5) ? y_x[0] = 1 , y_x[1] = 4: 0;
    (y_x[1] <= 0 && dot == 6) ? y_x[0] = 1 , y_x[1] = 7: 0;
    (y_x[1] <= 0 && dot == 7) ? y_x[0] = 0 , y_x[1] = 1: 0;
    (y_x[1] <= 0 && dot == 8) ? y_x[0] = 0 , y_x[1] = 4: 0;
    (y_x[1] <= 0 && dot == 9) ? y_x[0] = 0 , y_x[1] = 7: 0;
    return (y_x);
}
bool        Win::nichya()
{
    for (int i = 1; i < 10; ++i)
    {
        if (closed[i] == '.')
            return false;
    }
    return true;
}
