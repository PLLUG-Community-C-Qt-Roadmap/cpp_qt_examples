TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    class1.cpp \
    class2.cpp \
    class3.cpp \
    personalinformation.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    class1.h \
    class2.h \
    class3.h \
    personalinformation.h \
    cplusplustypes.h

