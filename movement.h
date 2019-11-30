#ifndef MOVEMENT_H
#define MOVEMENT_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QKeyEvent>
#include "object.h"
#include "Enemy.h"
#include "bullet.h"


class movement: public QObject,  public QGraphicsRectItem{

public:
    movement();
    void keyPressEvent(QKeyEvent *event);

public slots:
    void spawn();

private:
     object *bullet;
};

#endif // MOVEMENT_H
