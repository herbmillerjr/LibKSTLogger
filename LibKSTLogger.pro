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

win32 {
	CONFIG += skip_target_version_ext
	CONFIG -= debug_and_release debug_and_release_target
}
