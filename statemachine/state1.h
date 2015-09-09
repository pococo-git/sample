#ifndef STATE1_H
#define STATE1_H

#include "state.h"

class State1 : public State
{
public:
    State1(QState *parent = 0);

protected:
    virtual void onEntry(QEvent * event);
    virtual void onExit(QEvent * event);
};

#endif // STATE1_H
