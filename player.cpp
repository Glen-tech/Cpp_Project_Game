#include "player.h"

player::~player()
{
    delete elements.gamer ;
}

void player::makeobject(QGraphicsScene *playerview)
{
    smaller.testPlayer = true ;
    if(smaller.testPlayer){qDebug() << "Player Make Object werkt";}

    elements.gamer = new movement(); // eenmalige aanmaak van de speler
    elements.gamer ->setRect(0,0,100,100); // grote speler
    elements.gamer ->setPos(400,500);//midden van het scherm
    elements.gamer ->setFlag(QGraphicsItem::ItemIsFocusable);
    elements.gamer ->setFocus();
    playerview->addItem(elements.gamer);

}



