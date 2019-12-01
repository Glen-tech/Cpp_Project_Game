#include <QApplication>
#include <QGraphicsView>
#include <QDebug>
#include <QTimer>
#include "game.h"
#include "enemy.h"

Game::~Game()
{
   delete scene;
   delete view ;
   delete go;
   delete goEnemy;
}

void Game::makelevel()
{
    scene = new QGraphicsScene() ;
    timer = new QTimer;
    view = new QGraphicsView(scene);
    go = new player();
    goEnemy= new Enemy();

   view -> setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   view -> setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   view -> show();

   view -> setFixedSize(800,600); // grote venster
   scene -> setSceneRect(0,0,900,900); // grote speelveld

    go->makeobject(scene); // doorverwijzing naar player
    goEnemy->makeobject(scene);//doorverwijzing naar enemy

    QObject::connect(timer,SIGNAL(timeout()),goEnemy,SLOT(spawn()));// timer voor spawn enemy
    timer -> start(2000);// timer is nu gezet op 2 seconden

     qDebug() << "Game::Game(int &argc, char **argv) : QApplication (argc, argv)"; // zien waar je bent in de code bij compile
}
