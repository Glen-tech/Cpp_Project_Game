#ifndef PLAYER_H
#define PLAYER_H

#include "movement.h"
#include "object.h"
#include "enemy.h"

class player :public object{

public:
    player(){} //default constructor
    ~player();
    void makeobject(QGraphicsScene *playerview);

};

#endif // PLAYER_H
