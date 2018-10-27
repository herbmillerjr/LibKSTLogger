#pragma once

#include <QString>
#include "settingstypes.h"

DeclareSetting(LOGGER_LIVE_SIZE,"Logger/LiveSize",65535)

namespace KSTLogger
{
	const QString LOG_TIMESTAMP_FORMAT="yyyy/MM/dd HH:mm:ss";

	enum class MessageLevel
	{
		ALL,
		USER_FEEDBACK, // these are meant to be the only message that appear to the user, such as in the status bar of a desktop application
		DEBUG,
		ERROR
	};
}
