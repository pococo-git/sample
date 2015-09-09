#include "test.h"

#include "stab.h"
#include "state1.h"
#include "state11.h"
#include "state12.h"
#include "state2.h"
#include "state21.h"
#include "state22.h"

#include <QDebug>


Test::Test(QObject *parent) : QObject(parent)
{
    m_state = new StateMachine();
}

void Test::init()
{

    State1 *s1 = new State1(m_state);
    s1->setChildMode(QState::ExclusiveStates);

    State11 *s11 = new State11(s1);
    s1->setInitialState(s11);

    State2 *s2 = new State2();
    s2->setChildMode(QState::ExclusiveStates);
//    s2->setChildMode(QState::ParallelStates);

    State21 *s21 = new State21(s2);
    State22 *s22 = new State22(s2);

    s21->addTransition(new State11Transition(s1) );
    s21->addTransition(new State22Transition(s22) );
    s22->addTransition(new State11Transition(s11) );
    s22->addTransition(new State21Transition(s21) );
    s2->setInitialState(s21);

    qDebug() << "Size :" << s21->transitions().size();


    m_state->addState(s1);
//    m_state->addState(s11);
    m_state->addState(s2);
//    m_state->addState(s21);
//    m_state->addState(s22);
    m_state->setInitialState(s2);

}

void Test::start()
{
    m_state->start();
}
