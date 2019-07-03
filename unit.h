#ifndef UNIT_H
#define UNIT_H

#include <vector>
#include <forward_list>
#include "observer.h"

class Unit
{
public:
    Unit() = default;
    virtual ~Unit() = default;
    void notify();
    void attach(Observer *obs);
    void detach(Observer *obs);
    virtual void move();
    void attack(Unit *target);
    void receiveDamage(int damage);
private:
    int _health;
    int _attack;
    int _defence;
    std::forward_list<Observer*> observers;
};

#endif // UNIT_H
