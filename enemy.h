#ifndef ENEMY_H
#define ENEMY_H

#include "object.h"

class Enemy : public object
{
    Q_OBJECT

public:
    Enemy(){}
   ~Enemy();

    void makeobject(QGraphicsScene *playerview);

 public slots:
  void move();
  void spawn();
};

#endif // ENEMY_H
