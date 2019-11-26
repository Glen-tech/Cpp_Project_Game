#include <QApplication>
#include <QGraphicsView>
#include <QObject>
#include <game.h>


Game::Game(int &argc, char **argv) : QApplication (argc, argv)
{
    scene = nullptr;
    view = nullptr;

    // maken van een scene
   scene = new QGraphicsScene() ;// allocatie geheugen
    // item voor in de scene

   view = new QGraphicsView(scene);

   view -> setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   view -> setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   view -> show();

   view -> setFixedSize(900,900); // grote venster
   scene -> setSceneRect(0,0,900,900); // grote speelveld

   go->makeplayer(scene);

}

Game::~Game()
{
   delete scene;
   delete view ;
}
