#-------------------------------------------------
#
# Project created by QtCreator 2015-04-25T07:57:55
#
#-------------------------------------------------

QT       -= gui

TARGET = libleeterchat
TEMPLATE = lib
CONFIG += staticlib

SOURCES += server.cpp

HEADERS += server.hpp
unix {
    target.path = /usr/lib
    INSTALLS += target
}
