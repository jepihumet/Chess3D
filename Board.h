#ifndef BOARD_H
#define BOARD_H

#include "constants.h"
#include "Cell.h"
#include "Object3D.h"

class Board
{
public:
    Board();
    ~Board();
    Object3D obj;

    Cell cell[7][7];
};

#endif // BOARD_H
