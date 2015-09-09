#ifndef STATE_H
#define STATE_H

#include <QState>

class State : public QState
{
public:
    State(QState *parent = 0);

protected:
    virtual void onEntry(QEvent * event);
    virtual void onExit(QEvent * event);
};

#endif // STATE_H
