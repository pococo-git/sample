#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "test.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    Test test;
    test.init();
    test.start();

    return app.exec();
}
