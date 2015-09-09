#include "state21.h"
#include "state22.h"

#include <QDebug>
#include <QStateMachine>


void State21Transition::onTransition(QEvent *)
{
    qDebug() << "State21Transition::onTransition";
}

State21::State21(QState *parent)
    : State2(parent)
{

}

void State21::onEntry(QEvent *event)
{
    qDebug() << "State21::onEntry :" << QString("0x") + QString::number(event->type(), 16);

    qDebug() << "PostEvet : state22Event";
    machine()->postDelayedEvent(new State22Event(), 500);


}

void State21::onExit(QEvent *event)
{
    qDebug() << "State21::onExit :" << QString("0x") + QString::number(event->type(), 16);

}
