#ifndef GAME_H
#define GAME_H


#include "constants.h"
#include "Board.h"
#include "Movement.h"

class Game
{
public:
    Game();
    ~Game();

    Board board;
    Movement movements[MAX_MOVEMENTS];
};

#endif // GAME_H
