#ifndef STATE22_H
#define STATE22_H

#include "state2.h"
#include <QEvent>
#include <QAbstractTransition>

class State22Event : public QEvent
{
public:
    State22Event() : QEvent(QEvent::Type(QEvent::User+22))
        {}
};

class State22Transition : public QAbstractTransition
{
public:
    State22Transition(QState *state) { setTargetState(state); }

protected:
    virtual bool eventTest(QEvent *e) Q_DECL_OVERRIDE {
        return (e->type() == QEvent::User+22);
    }
    virtual void onTransition(QEvent *) Q_DECL_OVERRIDE;
};

class State22 : public State2
{
public:
    State22(QState *parent = 0);

protected:
    virtual void onEntry(QEvent * event);
    virtual void onExit(QEvent * event);

private:
    int m_num22;
};

#endif // STATE22_H
