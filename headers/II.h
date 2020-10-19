//
// Created by zeus on 28.08.2020.
//

#ifndef X_O_II_H
#define X_O_II_H

#include "Main_game.h"
#include "Win.h"

class   II : public Win
{
private:
    Main_Game *current_game;

    int one_turn_to_win();
    int block_hum();
    int check_1_3_7_9();
    int heart();
    int check_2_4_6_8();
    int where_turn();
public:
    explicit II(Main_Game *game);
    void make_turn();
};

#endif //X_O_II_H

//1 == 2.1   //4 == 1.1     //7 == 0.1
//2 == 2.4   //5 == 1.4     //8 == 0.4
//3 == 2.7   //6 == 1.7     //9 == 0.7