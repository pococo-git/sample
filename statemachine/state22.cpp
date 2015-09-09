#include "state22.h"
#include "state21.h"
#include "state11.h"

#include <QDebug>
#include <QStateMachine>

void State22Transition::onTransition(QEvent *)
{
    qDebug() << "State22Transition::onTransition";
}

State22::State22(QState *parent)
    : State2(parent)
    , m_num22(0)
{

}

void State22::onEntry(QEvent *event)
{
    qDebug() << "State22::onEntry :" << m_num22 << QString("0x") + QString::number(event->type(), 16);

    m_num22++;
    if (m_num22 == 10) {
        qDebug() << "PostEvet : state11Event";
        machine()->postDelayedEvent(new State11Event(), 500);
        m_num22 = 0;

    } else {
        qDebug() << "PostEvet : state21Event";
        machine()->postDelayedEvent(new State21Event(), 500);

    }

}

void State22::onExit(QEvent *event)
{
    qDebug() << "State22::onExit :" << QString("0x") + QString::number(event->type(), 16);

}
