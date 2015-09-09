#include "state.h"

#include <QEvent>
#include <QDebug>

State::State(QState *parent)
    : QState(parent)
{

}

void State::onEntry(QEvent *event)
{
    qDebug() << "State::onEntry :" << QString("0x") + QString::number(event->type(), 16);

}

void State::onExit(QEvent *event)
{
    qDebug() << "State::onExit :" << QString("0x") + QString::number(event->type(), 16);

}
