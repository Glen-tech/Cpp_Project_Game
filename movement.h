#ifndef MOVEMENT_H
#define MOVEMENT_H

#include <QObject>
#include <QKeyEvent>
#include "object.h"
#include "Enemy.h"
#include "bullet.h"


class movement: public QObject,  public QGraphicsRectItem{

public:
    movement():bullet(nullptr),testMovement(0){}//default constructor
    ~movement(){}
    bool testMovement;
    void keyPressEvent(QKeyEvent *event);
    object *bullet;

public slots:
    void spawn();

};

#endif // MOVEMENT_H
