#ifndef STATE12_H
#define STATE12_H

#include "state1.h"

class State12 : public State1
{
public:
    State12(QState *parent = 0);

protected:
    virtual void onEntry(QEvent * event);
    virtual void onExit(QEvent * event);
};

#endif // STATE12_H
