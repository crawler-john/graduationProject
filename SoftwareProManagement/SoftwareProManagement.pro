#-------------------------------------------------
#
# Project created by QtCreator 2016-04-08T23:05:21
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SoftwareProManagement
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    setsqlserver.cpp \
    dbmanager.cpp

HEADERS  += mainwindow.h \
    login.h \
    setsqlserver.h \
    dbmanager.h

OTHER_FILES += \
    img/SoftwareProManagement.png
