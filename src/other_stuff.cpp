//
// Created by zeus on 28.08.2020.
//

#include "../headers/other_stuff.h"


char **make_double_array(int col,int line)
{
    char **tmp;
    int i;
    tmp = new char* [line];
    for (i = 0; i <= line; ++i)
    {
        tmp[i] = new char [col];
        tmp[i][col] = '\0';
    }

    return tmp;
}
void print_2d_array(char **array, int size)
{
    int i = 0;
    while (i < size)
    {
        cout << array[i] << endl;
        i++;
    }
}

void pri_tmp(char opt, Main_Game *game)
{
    system("clear");
    cout << "Your Side : " << game->Get_hu_side() << " | " << "II Side : " << game->Get_ii_side() << endl;
    print_2d_array(game->Get_grid(), 3);
    if (opt == 'H' || opt == 'h')
    {
        cout << "YOU WIN !!!!!" << endl;
    }
    if (opt == 'I' || opt == 'i')
    {
        cout << "II WIN !!!!!" << endl;
    }
    if (opt == 'N' || opt == 'n')
    {
        cout << "Nichya..." << endl;
    }
}