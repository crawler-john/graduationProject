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
    adduser.cpp \
    alterpassword.cpp \
    alterphone.cpp \
    alteremail.cpp \
    alteraddress.cpp \
    dailyinfo.cpp \
    addrequest.cpp \
    addtask.cpp \
    addprocess.cpp \
    addprostaff.cpp \
    proinfo.cpp \
    prostaffinfo.cpp \
    addcost.cpp \
    procost.cpp \
    requestinfo.cpp \
    taskinfo.cpp \
    processinfo.cpp



HEADERS  += \
    login.h \
    dbmanager.h \
    mainwindow.h \
    userinfo.h \
    daily.h \
    monthly.h \
    addproject.h \
    adduser.h \
    alterpassword.h \
    alterphone.h \
    alteremail.h \
    alteraddress.h \
    dailyinfo.h \
    addrequest.h \
    addtask.h \
    addprocess.h \
    addprostaff.h \
    proinfo.h \
    prostaffinfo.h \
    addcost.h \
    procost.h \
    requestinfo.h \
    taskinfo.h \
    processinfo.h



OTHER_FILES += \
    configure.xml \
    configure/configure.xml \
    configure/proManager.sql


RESOURCES += \
    images.qrc

FORMS += \
    mainwindow.ui \
    daily.ui \
    monthly.ui \
    addproject.ui \
    adduser.ui \
    alterpassword.ui \
    alterphone.ui \
    alteremail.ui \
    alteraddress.ui \
    addrequest.ui \
    addtask.ui \
    addprocess.ui \
    addprostaff.ui \
    addcost.ui

OTHER_FILES += \
    my.rc


RC_FILE = my.rc






