#ifndef STATE11_H
#define STATE11_H

#include "state1.h"
#include <QEvent>
#include <QAbstractTransition>

class State11Event : public QEvent
{
public:
    State11Event() : QEvent(QEvent::Type(QEvent::User+11))
        {}
};

class State11Transition : public QAbstractTransition
{
public:
    State11Transition(QState *state) { setTargetState(state);}

protected:
    virtual bool eventTest(QEvent *e) Q_DECL_OVERRIDE {
        return (e->type() == QEvent::User+11);
    }
    virtual void onTransition(QEvent *) Q_DECL_OVERRIDE;
};

class State11 : public State1
{
public:
    State11(QState *parent = 0);

protected:
    virtual void onEntry(QEvent * event);
    virtual void onExit(QEvent * event);
};

#endif // STATE11_H
