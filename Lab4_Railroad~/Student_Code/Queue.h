#pragma once
#include "Linked_List.h"
using namespace std;

class Queue
{
	private:
		LinkedList<int> Q;
	public:
		bool queuePush(int car);
		int queueSize();
		bool queuePop();
		int queueTop();
		bool uniqueQueue(int car);
};
