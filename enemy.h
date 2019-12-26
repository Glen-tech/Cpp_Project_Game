#ifndef ENEMY_H
#define ENEMY_H

#include "object.h"


class Enemy : public object
{
    Q_OBJECT

public:
    Enemy():testMakeobject(0),testMove(0),testSpawn(0){} // default constructor

    bool testMakeobject;
    bool testMove;
    bool testSpawn;

   ~Enemy();
    void makeobject(QGraphicsScene *playerview);

 public slots:
  void move();
  void spawn();
};

#endif // ENEMY_H
