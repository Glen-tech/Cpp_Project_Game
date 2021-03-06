#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QApplication>
#include "player.h"
#include "enemy.h"
#include "movement.h"

class Game : public QApplication{

public:

    Game(int &argc, char **argv):QApplication (argc, argv) // specific constructor
    {testGame(true);}
    ~Game();

    void makelevel();

    bool testGame(bool testGame = 0){
     if(testGame){qDebug() << "Game werkt";
     makelevel();
     }
    return true ;}

     struct starting
     {
         QGraphicsScene * scene ;
         QGraphicsView *view;
         QTimer * timer;
         object *go ;
         object *goEnemy;
         Enemy *spawnEnemy;
         player player;

         bool testGame : 1;
         starting():scene(nullptr),go(nullptr),goEnemy(nullptr){}
     };

     starting ofGame;


};



#endif // GAME_H
