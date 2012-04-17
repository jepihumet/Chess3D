#ifndef MOVEMENT_H
#define MOVEMENT_H


class Movement
{
public:
    Movement();
    ~Movement();

    int from[2]; //Exemple: [5, 1] -> F2
    int to[2];
    int piece;
};

#endif // MOVEMENT_H
