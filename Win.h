//
// Created by zeus on 28.08.2020.
//

#ifndef X_O_WIN_H
#define X_O_WIN_H


class   Win
{
private:
    char *closed;
public:
    explicit    Win(char *new_closed);
    bool        check_win(char side);
    int         close_to_win(char side);
    static int *convert(int dot);
    bool        nichya();
};


#endif //X_O_WIN_H
