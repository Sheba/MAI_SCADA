#-------------------------------------------------
#
# Project created by QtCreator 2011-12-22T17:40:15
#
#-------------------------------------------------

QT       += core gui

TARGET = project
TEMPLATE = app


SOURCES += \
    ../Viewer/src/String.cpp \
    ../Viewer/src/square.cpp \
    ../Viewer/src/shape.cpp \
    ../Viewer/src/numberbox.cpp \
    ../Viewer/src/mainwindow.cpp \
    ../Viewer/src/main.cpp \
    ../Viewer/src/Line.cpp \
    ../Viewer/src/circle.cpp \
    ../VarBase/src/lib.cpp \
    ../Viewer/src/IntDigit.cpp \
    ../Viewer/src/DoubleDigit.cpp

HEADERS  += \
    ../Viewer/include/String.h \
    ../Viewer/include/square.h \
    ../Viewer/include/shape.h \
    ../Viewer/include/numberbox.h \
    ../Viewer/include/mainwindow.h \
    ../Viewer/include/Line.h \
    ../Viewer/include/circle.h \
    ../VarBase/include/basecode.h \
    ../Viewer/include/IntDigit.h \
    ../Viewer/include/DoubleDigit.h

FORMS    +=

OTHER_FILES += \
    varbase.xml \
    ../project-build-desktop/varbase.xml
