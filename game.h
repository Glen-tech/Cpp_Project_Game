#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QApplication>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include "player.h"
#include "movement.h"

class Game : public QApplication{

public:
    Game(int &argc, char **argv);
    ~Game();

    QGraphicsScene * scene ;
    QGraphicsView *view;
    QKeyEvent *movement;
    player *go ;


};



#endif // GAME_H
