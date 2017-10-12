#pragma once
#include "Node.h"

class Train
{
private:
	Node* _current;
public:
	Train();
	~Train(); 
	void Add(int value);
	void Print();
	int Count();
};

