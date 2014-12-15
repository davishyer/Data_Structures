#include "Queue.h"

bool Queue::queuePush(int car)
{
	Q.insertHead(car);
	return true;
}

int Queue::queueSize()
{
	return Q.size();
}

bool Queue::queuePop()
{
	if(Q.size() != 0)
	{
		Q.remove(Q.at(Q.size() - 1));
		return true;
	}
	return false;
}

int Queue::queueTop()
{
	if(Q.size() == 0)
	{
		return -1;
	}
	return Q.at(Q.size() - 1);
}

bool Queue::uniqueQueue(int car)
{
	if(Q.size() == 0)
	{
		return true;
	}
	for(unsigned i = 0; i < Q.size() - 1; i++)
	{
		if(Q.at(i) == car)
		{
			return false;
		}
	}
	return true;
}



