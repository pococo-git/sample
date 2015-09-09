#ifndef STATE21_H
#define STATE21_H

#include "state2.h"
#include <QEvent>
#include <QAbstractTransition>

class State21Event : public QEvent
{
public:
    State21Event() : QEvent(QEvent::Type(QEvent::User+21))
        {}
};

class State21Transition : public QAbstractTransition
{
public:
    State21Transition(QState *state) { setTargetState(state);}

protected:
    virtual bool eventTest(QEvent *e) Q_DECL_OVERRIDE {
        return (e->type() == QEvent::User+21);
    }
    virtual void onTransition(QEvent *) Q_DECL_OVERRIDE;
};

class State21 : public State2
{
public:
    State21(QState *parent = 0);

protected:
    virtual void onEntry(QEvent * event);
    virtual void onExit(QEvent * event);
};

#endif // STATE21_H
