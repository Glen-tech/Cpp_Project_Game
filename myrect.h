#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsRectItem>
#include <QObject>
#include <bullet.h>
#include <enemy.h>

class MyRect :public QObject,  public QGraphicsRectItem{
    Q_OBJECT
public:
    MyRect(QKeyEvent *event);
    Bullet *bullet;
    Enemy *enemy;
public slots:
    void spawn();
};

#endif // MYRECT_H
