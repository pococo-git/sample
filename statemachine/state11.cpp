#include "state11.h"

#include <QEvent>
#include <QDebug>

void State11Transition::onTransition(QEvent *)
{
    qDebug() << "State11Transition::onTransition";
}

State11::State11(QState *parent)
   : State1(parent)
{
}

void State11::onEntry(QEvent *event)
{
    qDebug() << "State11::onEntry :" << QString("0x") + QString::number(event->type(), 16);

}

void State11::onExit(QEvent *event)
{
    qDebug() << "State11::onExit :" << QString("0x") + QString::number(event->type(), 16);

}
