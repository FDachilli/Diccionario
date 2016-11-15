#-------------------------------------------------
#
# Project created by QtCreator 2015-02-16T19:03:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TpAlgoritmos1qt
TEMPLATE = app


SOURCES += main.cpp\
        tpalgoritmos.cpp \
    ternary.cpp \
    nodo.cpp \
    principal.cpp \
    nodorway.cpp \
    rway.cpp

HEADERS  += tpalgoritmos.h \
    ternary.h \
    nodo.h \
    principal.h \
    nodorway.h \
    rway.h

FORMS    += tpalgoritmos.ui \
    principal.ui

RESOURCES += \
    imagenes.qrc

RC_FILE = myapp.rc

