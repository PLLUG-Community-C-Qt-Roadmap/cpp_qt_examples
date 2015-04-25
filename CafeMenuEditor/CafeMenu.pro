TEMPLATE = app
QT = core
CONFIG += console
CONFIG += c++11
CONFIG -= app_bundle

SOURCES += main.cpp \
    menuitem.cpp \
    menu.cpp \
    menuiterator.cpp \
    consoleprintmenuvisitor.cpp \
    composite.cpp

HEADERS += \
    menuitem.h \
    menu.h \
    menuiterator.h \
    menuvisitor.h \
    consoleprintmenuvisitor.h \
    composite.h

