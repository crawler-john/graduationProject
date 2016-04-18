#-------------------------------------------------
#
# Project created by QtCreator 2016-04-08T23:05:21
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SoftwareProManagement
TEMPLATE = app


SOURCES += main.cpp\
    login.cpp \
    dbmanager.cpp \
    mainwindow.cpp \
    userinfo.cpp

HEADERS  += \
    login.h \
    dbmanager.h \
    mainwindow.h \
    userinfo.h

OTHER_FILES += \
    img/SoftwareProManagement.png \
    img/YA~7BT50L)6_]9L{P2MT25D.png \
    img/serversetDialog.png \
    img/serversetDialo.png \
    img/btnSet.png \
    img/btnQuit.png \
    img/btnMinimize.png \
    img/btnLogin.png \
    configure.xml \
    configure/configure.xml \
    configure/proManager.sql

FORMS += \
    mainwindow.ui
