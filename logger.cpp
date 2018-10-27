#include <QTextStream>
#include "settings.h"
#include "settingstypes.h"
#include "logger.h"

namespace KSTLogger
{
	std::queue<LogMessage> Logger::messages;

	void Logger::Record(LogMessage message) const
	{
		message.SetPrefix(prefix);
		messages.push(message);
		if (messages.size() > Setting(LOGGER_LIVE_SIZE).toUInt()) messages.pop();
		QString formattedMessage=Compile(message);
		if (message.Level() == MessageLevel::USER_FEEDBACK || message.Level() == MessageLevel::ALL) emit UserMessageReceived(formattedMessage);
		emit DeveloperMessageReceived(formattedMessage);
	}

	const QString Logger::Compile(LogMessage &message) const
	{
		QString formattedMessage;
		QTextStream stream(&formattedMessage);
		stream << "[" << message.Timestamp() << "] " << message.Prefix() << ": " << message.Description();
		if (!message.Value().isEmpty()) stream << " = " << message.Value();
		stream << endl;
		return formattedMessage;
	}
}
