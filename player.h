#ifndef PLAYER_H
#define PLAYER_H

#include "movement.h"
#include "object.h"
#include "enemy.h"

class player :public object{

public:
    player():testPlayer(0){} //default constructor
    bool testPlayer;
    ~player();
    void makeobject(QGraphicsScene *playerview);
};

#endif // PLAYER_H
