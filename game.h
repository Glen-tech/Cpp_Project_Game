#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QApplication>
#include "player.h"


class Game : public QApplication{

public:

    Game(int &argc, char **argv):QApplication (argc, argv),scene(nullptr),go(nullptr),goEnemy(nullptr) // specific constructor
    {
        makelevel();
    }
    ~Game();

     void makelevel();
     QGraphicsScene * scene ;
     QGraphicsView *view;
     QTimer * timer;
     object *go ;
     object *goEnemy;

};



#endif // GAME_H
