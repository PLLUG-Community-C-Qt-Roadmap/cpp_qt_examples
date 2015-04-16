TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    menuitem.cpp \
    category.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    menuitem.h \
    category.h

