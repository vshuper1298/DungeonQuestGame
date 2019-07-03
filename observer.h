#ifndef OBSERVER_H
#define OBSERVER_H


class Observer
{
public:
    Observer() = default;
    virtual ~Observer() = 0;
    virtual void update() = 0;
};

#endif // OBSERVER_H
