#-------------------------------------------------
#
# Project created by QtCreator 2015-04-19T08:37:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = leeterchat
TEMPLATE = app
CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    networklist.cpp

HEADERS  += mainwindow.hpp \
    networklist.hpp

FORMS    += mainwindow.ui \
    networklist.ui

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../libleeterchat/release/ -llibleeterchat
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../libleeterchat/debug/ -llibleeterchat
else:unix: LIBS += -L$$OUT_PWD/../libleeterchat/ -llibleeterchat

INCLUDEPATH += $$PWD/../libleeterchat
DEPENDPATH += $$PWD/../libleeterchat

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../libleeterchat/release/liblibleeterchat.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../libleeterchat/debug/liblibleeterchat.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../libleeterchat/release/libleeterchat.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../libleeterchat/debug/libleeterchat.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../libleeterchat/liblibleeterchat.a
