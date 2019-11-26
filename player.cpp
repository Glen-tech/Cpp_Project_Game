#include "player.h"

player::player()
{
;
}

void player::makeplayer(QGraphicsScene *playerview)
{
    gamer = new movement();

    gamer -> setRect(0,0,100,100);
    gamer ->setPos(400,500);//midden van het scherm
    gamer ->setFlag(QGraphicsItem::ItemIsFocusable);
    gamer ->setFocus();

    playerview->addItem(gamer);

}

