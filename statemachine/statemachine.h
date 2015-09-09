#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include <QStateMachine>
#include "state.h"

class StateMachine : public QStateMachine
{
public:
    StateMachine(QState *parent = 0);

private:
    State *m_context;

    QList<QState*> m_stateList;

};

#endif // STATEMACHINE_H
