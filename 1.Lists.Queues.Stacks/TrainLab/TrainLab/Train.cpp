#include "stdafx.h"
#include "Train.h"


Train::Train()
{
	_current = NULL;
}


Train::~Train()
{
	_current = NULL;
}

void Train::Add(int value)
{
	//random elements count
	//random light value in elements
}

void Train::Print()
{
	int count = Count();
	while (count-- > 0)
	{
		cout << _current->light << ",";
		_current = _current->next;
	}
}

int Train::Count()
{
	if (_current == NULL)
	{
		return 0;
	}
	
	int counter = 1;
	bool startLight = _current->light;
	while (true)
	{
		for (int forward = 0; forward < counter; forward++)
		{
			_current = _current->next;
		}
		if (_current->light == startLight)
		{
			_current->light = !startLight;
			for (int ret = 0; ret < counter; ret++)
			{
				_current = _current->prev;
			}
			if (_current->light != startLight)
			{
				return counter;
			}
		}
		counter += 1;
	}
}
