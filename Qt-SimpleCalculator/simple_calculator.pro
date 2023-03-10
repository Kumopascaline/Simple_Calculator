#-------------------------------------------------
#
# Project created by QtCreator 2022-01-19T23:09:46
#
#-------------------------------------------------
QT       += core gui sql

QT       += core gui

CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = simple_calculator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += $$(PWD)/include


SOURCES += src/mainwindow.cpp \
 src/database.cpp \
 src/main.cpp

HEADERS += include/mainwindow.h \
    include/database.h


FORMS += ui/mainwindow.ui \
    ui/database.ui \
    ui/history.ui



