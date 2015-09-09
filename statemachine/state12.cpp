#include "state12.h"

#include <QEvent>
#include <QDebug>

State12::State12(QState *parent)
    : State1(parent)
{

}

void State::onEntry(QEvent *event)
{
    qDebug() << "State12::onEntry :" << QString("0x") + QString::number(event->type(), 16);

}

void State::onExit(QEvent *event)
{
    qDebug() << "State2::onExit :" << QString("0x") + QString::number(event->type(), 16);

}

