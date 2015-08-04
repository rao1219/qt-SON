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
    self_organize.cpp \
    graphicstest.cpp \
    set_algorithm.cpp \
    ap.cpp \
    dot.cpp

HEADERS  += mainwindow.h \
    self_set.h \
    self_organize.h \
    graphicstest.h \
    set_algorithm.h \
    ap.h \
    dot.h

FORMS    += mainwindow.ui \
    self_set.ui \
    self_organize.ui \
    graphicstest.ui


RESOURCES += \
    image/image.qrc


