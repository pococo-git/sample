TEMPLATE = app

QT += qml quick
QT += core gui

SOURCES += main.cpp \
    test.cpp \
    statemachine.cpp \
    state.cpp \
    state1.cpp \
    state11.cpp \
    state2.cpp \
    state21.cpp \
#    state12.cpp
    state22.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    test.h \
    statemachine.h \
    state.h \
    state1.h \
    state11.h \
    state2.h \
    state21.h \
#    state12.h
    state22.h
