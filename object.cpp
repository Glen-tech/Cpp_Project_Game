#include "object.h"

object::object()
{
    gamer = nullptr ;
}

object::~object()
{
    delete gamer;
}
