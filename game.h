#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <myrect.h>
#include <QGraphicsView>
#include <QTimer>
#include <QApplication>

class Game : public QApplication{

public:
    Game(int &argc, char **argv);
    ~Game();
    QGraphicsScene * scene ;
    MyRect *player ;
    QGraphicsView *view;
    QTimer *timer;
};



#endif // GAME_H
