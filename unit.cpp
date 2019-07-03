#include "unit.h"

void Unit::notify()
{
    for (Observer *object : observers)
    {
        object->update();
    }
}

void Unit::attach(Observer *obs)
{
    observers.push_front(obs);
}

void Unit::detach(Observer *obs)
{
    observers.remove(obs);
}
