#-------------------------------------------------
#
# Project created by QtCreator 2020-10-08T21:13:28
#
#-------------------------------------------------

QT       += network sql

QT       -= gui

TARGET = tdlib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += api.cpp \
    mtproto.cpp \
    apiquery.cpp \
    apimethods.cpp

HEADERS += api.h \
    defaults.h \
    TL_serialization_op_codes.h \
    mtproto.h \
    apiquery.h \
    apimethods.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

symbian: LIBS += -llibcrypto
