#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QApplication>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include "player.h"
#include "movement.h"
#include "enemy.h"

class Game : public QApplication{

public:

    Game(int &argc, char **argv):QApplication (argc, argv),scene(nullptr),go(nullptr),goEnemy(nullptr)
    {
        makelevel();
    }

    ~Game();

     void makelevel();
     QGraphicsScene * scene ;
     QGraphicsView *view;
     QKeyEvent *movement;
     object *go ;
     object *goEnemy;
     QTimer * timer;

};



#endif // GAME_H
