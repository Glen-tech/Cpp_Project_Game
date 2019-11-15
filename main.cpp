#include <QApplication>
#include <game.h>

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    Game game(argc, argv);// = new Game();
    //game -> show();

   return game.exec();
}
