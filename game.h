#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QApplication>
#include "player.h"
#include "enemy.h"

class Game : public QApplication{

public:

    Game(int &argc, char **argv):QApplication (argc, argv) // specific constructor
    {makelevel();}
    ~Game();

    void makelevel();

     struct bloks
     {
         QGraphicsScene * scene ;
         QGraphicsView *view;
         QTimer * timer;
         object *go ;
         object *goEnemy;
         player player;
         const bool testGame;
         bloks():scene(nullptr),go(nullptr),goEnemy(nullptr),testGame(true){}
     };

     bloks ofGame;

};



#endif // GAME_H
