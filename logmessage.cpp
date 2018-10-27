#include "settings.h"
#include "settingstypes.h"
#include "logmessage.h"

namespace KSTLogger
{
	void LogMessage::SetPrefix(QString prefix)
	{
		this->prefix=prefix.toUpper();
	}
}
