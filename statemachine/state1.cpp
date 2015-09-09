#include "state1.h"

#include <QEvent>
#include <QDebug>

State1::State1(QState *parent)
    : State(parent)
{

}

void State1::onEntry(QEvent *event)
{
    qDebug() << "State1::onEntry :" << QString("0x") + QString::number(event->type(), 16);

}

void State1::onExit(QEvent *event)
{
    qDebug() << "State1::onExit :" << QString("0x") + QString::number(event->type(), 16);

}

