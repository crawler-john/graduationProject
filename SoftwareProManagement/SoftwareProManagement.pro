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
    userinfo.cpp \
    daily.cpp \
    monthly.cpp \
    addproject.cpp \
    adduser.cpp



HEADERS  += \
    login.h \
    dbmanager.h \
    mainwindow.h \
    userinfo.h \
    daily.h \
    monthly.h \
    addproject.h \
    adduser.h



OTHER_FILES += \
    configure.xml \
    configure/configure.xml \
    configure/proManager.sql \
    my.rc


FORMS += \
    mainwindow.ui \
    daily.ui \
    monthly.ui \
    addproject.ui \
    adduser.ui


RESOURCES += \
    images.qrc


