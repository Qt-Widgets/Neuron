TEMPLATE = app
QT += widgets
INCLUDEPATH += $$PWD/../common

include(../../../noron.pri)

SOURCES += \
    main.cpp \
    clientwindow.cpp \
    ../common/user.cpp \
    ../common/server.cpp

FORMS += \
    clientwindow.ui

HEADERS += \
    clientwindow.h \
    ../common/user.h \
    ../common/server.h \
    ../common/defines.h
