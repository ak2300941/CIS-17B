#-------------------------------------------------
#
# Project created by QtCreator 2014-10-30T22:09:45
#
#-------------------------------------------------

QT       += core gui
QT       +=xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 17B_Project_1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    settingmenu.cpp \
    gamewindow.cpp \
    enemies.cpp \
    player.cpp \
    gameover.cpp \
    storage.cpp \
    highscore.cpp

HEADERS  += mainwindow.h \
    settingmenu.h \
    gamewindow.h \
    enemies.h \
    player.h \
    gameover.h \
    storage.h \
    highscore.h

FORMS    += mainwindow.ui \
    settingmenu.ui \
    gamewindow.ui \
    gameover.ui \
    highscore.ui

RESOURCES += \
    Sprites.qrc
