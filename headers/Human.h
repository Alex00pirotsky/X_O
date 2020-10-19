//
// Created by zeus on 28.08.2020.
//

#ifndef X_O_HUMAN_H
#define X_O_HUMAN_H

#include "Main_game.h"
#include "Win.h"

class Human : public Win
{
private:
    Main_Game *curr_game;
    void pr_open();
public:
    explicit Human(Main_Game *game);
    void make_turn();
};



#endif //X_O_HUMAN_H
