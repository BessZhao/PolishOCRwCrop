#-------------------------------------------------
#
# Project created by QtCreator 2016-05-16T14:11:37
#
#-------------------------------------------------
QT       += qml quick widgets
QT       += core gui
QT       += core network script

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets webkitwidgets

TARGET = Interface
TEMPLATE = app

CONFIG  += c++11
CONFIG += debug_and_release
SOURCES += main.cpp\
        mainwindow.cpp \
    promptdialog.cpp \
    cropdialog.cpp

HEADERS  += mainwindow.h \
    promptdialog.h \
    cropdialog.h

FORMS    += mainwindow.ui \
    promptdialog.ui \
    cropdialog.ui

RESOURCES += \
    image.qrc
