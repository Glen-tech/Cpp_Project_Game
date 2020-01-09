#ifndef ENEMY_H
#define ENEMY_H

#include "object.h"


class Enemy : public object
{
    Q_OBJECT

public:
    Enemy(){} // default constructor
   ~Enemy();
    void makeobject(QGraphicsScene *playerview);

 public slots:
  void move();

};

#endif // ENEMY_H
