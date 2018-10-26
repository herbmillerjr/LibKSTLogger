#ifndef LIBKSTLOGGER_GLOBAL_H
#define LIBKSTLOGGER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBKSTLOGGER_LIBRARY)
#  define LIBKSTLOGGERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBKSTLOGGERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBKSTLOGGER_GLOBAL_H
