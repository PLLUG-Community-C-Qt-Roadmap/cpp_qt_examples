TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    second.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    second.h

