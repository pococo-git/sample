#include "statemachine.h"

StateMachine::StateMachine(QState *parent)
    : QStateMachine(parent)
    , m_context(NULL)
{

}

