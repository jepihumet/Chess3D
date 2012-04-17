TEMPLATE = app
QT += opengl
CONFIG += warn_on

win32 {
    LIBS += -L"$$(GLC_LIB_DIR)/lib" -lGLC_lib2
    INCLUDEPATH += "$$(GLC_LIB_DIR)/include"
}

unix {
     LIBS += -lGLC_lib
     INCLUDEPATH += "/usr/local/include/GLC_lib"
}

# Input
HEADERS += glwidget.h mainwindow.h \
    Cell.h \
    Board.h \
    Game.h \
    constants.h \
    Piece.h \
    Object3D.h \
    Movement.h \
    model.h
SOURCES += glwidget.cpp main.cpp mainwindow.cpp \
    Cell.cpp \
    Board.cpp \
    Game.cpp \
    Piece.cpp \
    Object3D.cpp \
    Movement.cpp \
    model.cpp

QMAKE_RESOURCE_FLAGS += -threshold 0 -compress 9
RESOURCES += application.qrc
