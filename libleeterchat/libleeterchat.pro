#-------------------------------------------------
#
# Project created by QtCreator 2015-04-25T07:57:55
#
#-------------------------------------------------

QT       -= gui

TARGET = libleeterchat
TEMPLATE = lib
CONFIG += staticlib
CONFIG += c++11

SOURCES += server.cpp \
    session.cpp \
    user.cpp \
    ircnetwork.cpp

HEADERS += server.hpp \
    session.hpp \
    user.hpp \
    ircnetwork.hpp \
    login_type.hpp
unix {
    target.path = /usr/lib
    INSTALLS += target
}
