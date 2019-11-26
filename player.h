#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsView>
#include <QGraphicsScene> // maken kogel
#include <QApplication>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include "movement.h"
#include "object.h"
class player :public object{

public:
    player();
    void makeplayer(QGraphicsScene *playerview);
};

#endif // PLAYER_H
