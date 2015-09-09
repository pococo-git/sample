#ifndef STATE2_H
#define STATE2_H

#include "state.h"

class State2 : public State
{
public:
    State2(QState *parent = 0);

protected:
    virtual void onEntry(QEvent * event);
    virtual void onExit(QEvent * event);
};

#endif // STATE2_H
