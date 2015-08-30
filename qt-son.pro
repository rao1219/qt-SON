#-------------------------------------------------
#
# Project created by QtCreator 2015-07-19T14:36:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt-son
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    self_set.cpp \
    graphicstest.cpp \
    set_algorithm.cpp \
    ap.cpp \
    dot.cpp \
    user.cpp \
    self_youhua.cpp \
    self_optimize_set.cpp \
    eventbutton.cpp \
    eventset.cpp

HEADERS  += mainwindow.h \
    self_set.h \
    graphicstest.h \
    set_algorithm.h \
    ap.h \
    dot.h \
    user.h \
    self_youhua.h \
    self_optimize_set.h \
    eventbutton.h \
    eventset.h

FORMS    += mainwindow.ui \
    self_set.ui \
    graphicstest.ui \
    self_optimize_set.ui \
    eventset.ui


RESOURCES += \
    image/image.qrc


