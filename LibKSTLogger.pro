QT -= gui

TARGET = KSTLogger
TEMPLATE = lib

DEFINES += LIBKSTLOGGER_LIBRARY

SOURCES += \
    logger.cpp \
    logmessage.cpp

HEADERS += \
        libkstlogger_global.h \ 
    logger.h \
    logmessage.h \
    loggertypes.h

INCLUDEPATH += ../LibKSTSettings
LIBS += -L../LibKSTSettings -lKSTSettings
