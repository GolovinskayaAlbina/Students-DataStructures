#pragma once
#include "ILogger.h"
class FileLogger: public ILogger
{
private:
	string _fileName;
public:
	virtual void Information(string message);
	virtual void Warning(string message);
	virtual void Error(string message);
	FileLogger(string fileName);
	virtual ~FileLogger();
};

