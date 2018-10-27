#pragma once

#include <QObject>
#include <QFile>
#include <queue>
#include "libkstlogger_global.h"
#include "logmessage.h"

namespace KSTLogger
{
	class LIBKSTLOGGERSHARED_EXPORT Logger : public QObject
	{
		Q_OBJECT
	public:
		Logger() = delete;
		Logger(QString prefix) : prefix(prefix) { }
	protected:
		static QFile logFile;
		static std::queue<LogMessage> messages;
		QString prefix;
		const QString Compile(LogMessage &message) const;
	signals:
		void UserMessageReceived(const QString formattedMessage) const;
		void DeveloperMessageReceived(const QString formattedMessage) const;
	public slots:
		void Record(LogMessage message) const;
	};
}

