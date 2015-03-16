TEMPLATE = app
CONFIG += console
CONFIG += c++14
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += ./boost_1_57_0
LIBS += -lws2_32 -lwsock32

SOURCES += main.cpp \
    connection.cpp \
    connection_manager.cpp \
    mime_types.cpp \
    reply.cpp \
    request_handler.cpp \
    request_parser.cpp \
    server.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    asio.hpp \
    connection.hpp \
    connection_manager.hpp \
    header.hpp \
    mime_types.hpp \
    reply.hpp \
    request.hpp \
    request_handler.hpp \
    request_parser.hpp \
    server.hpp
