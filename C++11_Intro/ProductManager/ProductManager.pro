#-------------------------------------------------
#
# Project created by QtCreator 2015-10-27T19:11:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProductManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    productlistmodel.cpp \
    product.cpp \
    dataaccesslayer.cpp

HEADERS  += mainwindow.h \
    productlistmodel.h \
    product.h \
    dataaccesslayer.h

FORMS    += mainwindow.ui

DISTFILES += \
    data.txt
