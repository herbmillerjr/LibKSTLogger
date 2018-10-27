#pragma once

#include <QString>
#include <QVariant>
#include <QDateTime>
#include "loggertypes.h"

namespace KSTLogger
{
	class LogMessage
	{
	public:
		LogMessage() = delete;
		LogMessage(MessageLevel level,QString description,QVariant value=QVariant()) : level(level), description(description), value(value), timestamp(QDateTime::currentDateTime()) { }
		MessageLevel Level() const { return level; }
		const QString Description() const { return description; }
		const QString Value() const { return value.toString(); }
		const QString Prefix() const { return prefix; }
		const QString Timestamp() const { return timestamp.toString(LOG_TIMESTAMP_FORMAT); }
		void SetPrefix(QString prefix);
	protected:
		MessageLevel level;
		QString description;
		QVariant value;
		QString prefix;
		QDateTime timestamp;
	};
}
