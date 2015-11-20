#-------------------------------------------------
#
# Project created by QtCreator 2015-11-20T09:11:20
#
#-------------------------------------------------

QT       -= gui

TARGET = MathFunctions2
TEMPLATE = lib

DEFINES += MATHFUNCTIONS2_LIBRARY

SOURCES += mathfunctions2.cpp

HEADERS += mathfunctions2.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
