#include "../headers/Main_game.h"
#include "../headers/Win.h"
#include "../headers/other_stuff.h"
#include "../headers/II.h"
#include "../headers/Human.h"


void lets_play()
{
    Main_Game *game;
    II *ii;
    Human *hu;
    system("clear");
    game    = new Main_Game();
    ii      = new II(game);
    hu      = new Human(game);
    print_2d_array(game->Get_grid(),3);
    game->first_turn();
    if (game->Get_hu_side() == 'X')
        hu->make_turn();
    while(1)
    {
        pri_tmp(0,game);
        ii->make_turn();
        pri_tmp(0,game);
        if(ii->check_win(game->Get_ii_side()))
        {
            pri_tmp('I',game);
            break;
        }
        if (ii->nichya())
        {
            pri_tmp('N',game);
            break;
        }
        hu->make_turn();
        pri_tmp(0,game);
        if(hu->check_win(game->Get_hu_side()))
        {
            pri_tmp('H',game);
            break;
        }
        if (hu->nichya())
        {
            pri_tmp('N',game);
            break;
        }
    }
}
int main()
{
    lets_play();
    return 0;
}
//   |
// O |
//   |
//---+
//[X][][]
//[][X][]
//[][][X]