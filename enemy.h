#ifndef ENEMY_H
#define ENEMY_H
#include <QGraphicsRectItem>
#include <QObject>
#include "object.h"

class Enemy : public object
{
Q_OBJECT

public:
   Enemy();
   ~Enemy();
   void makeEnemy();
};

#endif // ENEMY_H
