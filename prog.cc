#include <iostream>
#include "DynIntQueue.h"
using namespace std;

int main()
{
	const int MAX_VALUES = 5;

	DynIntQueue iQueue;

	for (int i = 0; i < MAX_VALUES; i++)
		iQueue.enqueue(i);
	
	while (!iQueue.isEmpty()) {
		int value;
		iQueue.dequeue(value);
		cout << value << endl;
	}

	return 0;
}
