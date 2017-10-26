#include "stdafx.h"
#include "FileLogger.h"

FileLogger::FileLogger(string fileName)
{
	_fileName = fileName;
}

void FileLogger::Information(string message)
{
	//TODO: create log to file with name _fileName
}

void FileLogger::Warning(string message)
{
	//TODO: create log to file
}

void FileLogger::Error(string message)
{
	//TODO: create log to file
}

FileLogger::~FileLogger()
{
	//TODO: free memory
}
