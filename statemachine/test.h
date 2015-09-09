#ifndef TEST_H
#define TEST_H

#include <QObject>
#include "statemachine.h"

class Test : public QObject
{
//    Q_OBJECT
public:
    explicit Test(QObject *parent = 0);

    void init();
    void start();

signals:

public slots:

private:
    StateMachine *m_state;
};

#endif // TEST_H
