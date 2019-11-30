#include <QApplication>
#include <QGraphicsView>
#include <QDebug>
#include <QTimer>
#include "game.h"

Game::~Game()
{
   delete scene;
   delete view ;
   delete go;
   delete goEnemy;
}

void Game::makelevel()
{
    // maken van een scene
    scene = new QGraphicsScene() ;// allocatie geheugen
    // item voor in de scene
    timer = new QTimer;

   view = new QGraphicsView(scene);

   go = new player();
   goEnemy= new Enemy();

   view -> setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   view -> setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   view -> show();

   view -> setFixedSize(800,600); // grote venster
   scene -> setSceneRect(0,0,900,900); // grote speelveld

    go->makeobject(scene);
    goEnemy->makeobject(scene);
    qDebug() << "Game::Game(int &argc, char **argv) : QApplication (argc, argv)";
    QObject::connect(timer,SIGNAL(timeout()),goEnemy,SLOT(spawn()));
    timer -> start(2000);
}
