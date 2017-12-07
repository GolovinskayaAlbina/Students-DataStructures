#include "stdafx.h"
#include "Train.h"

Train::Train(ILogger* logger)
{
	_logger = logger;
	_current = NULL;
}


Train::~Train()
{

}

void Train::Add(bool light)
{
	Node* node = new Node(light);
	if (_current == NULL)
	{
		_current = node;
	}
	else
	{
		Node* next = _current->Next;
		if (next == NULL)
		{
			_current->Next = node;
			node->Prev = _current;
			node->Next = _current;
			_current->Prev = node;
		}
		else
		{
			_current->Next = node;
			next->Prev = node;
			node->Prev = _current;
			node->Next = next;
		}
	}
}

void Train::Print()
{
	int count = Count();
	while (count-- > 0)
	{
		cout << _current->Light << ",";
		_current = _current->Next;
	}
}

int Train::Count()
{
	if (_current == NULL)
	{
		_logger->Information("Train has no carriages");
		return 0;
	}
	
	int counter = 1;
	bool startLight = _current->Light;
	while (true)
	{
		for (int forward = 0; forward < counter; forward++)
		{
			_current = _current->Next;
		}
		if (_current->Light == startLight)
		{
			_current->Light = !startLight;
			for (int ret = 0; ret < counter; ret++)
			{
				_current = _current->Prev;
			}
			if (_current->Light != startLight)
			{
				return counter;
			}
		}
		counter += 1;
	}
}
