#pragma once
#include "ILogger.h"
#include "Node.h"

class Train
{
private:
	ILogger* _logger;
	Node* _current;
public:
	Train(ILogger* logger);
	~Train(); 
	void Add(int value);
	void Print();
	int Count();
};

