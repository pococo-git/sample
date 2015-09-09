#include "state2.h"
#include "state22.h"

#include <QEvent>
#include <QDebug>
#include <QStateMachine>

State2::State2(QState *parent)
    : State(parent)
{

}

void State2::onEntry(QEvent *event)
{
    qDebug() << "State2::onEntry :" << QString("0x") + QString::number(event->type(), 16);
}

void State2::onExit(QEvent *event)
{
    qDebug() << "State2::onExit :" << QString("0x") + QString::number(event->type(), 16);

}
