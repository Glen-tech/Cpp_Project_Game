#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QApplication>
#include "score.h"
#include "myrect.h"

class Game : public QApplication{

public:
    Game(int &argc, char **argv);
    ~Game();
    Score *score;
    MyRect *player;
    QGraphicsScene * scene ;
    QGraphicsView *view;
    QTimer *timer;

};



#endif // GAME_H
