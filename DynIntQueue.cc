#include <iostream>
#include "DynIntQueue.h"
using namespace std;

// Constructor
DynIntQueue::DynIntQueue() 
{
	numItems = 0;
	rear = NULL;
	front = NULL;
}
// Dystructor
DynIntQueue::~DynIntQueue()
{
	cout << "Destructor is called to clean out the memory.\n";
	clear();
}

// Operations
void DynIntQueue::enqueue (int num)
{
	
	QueueNode *newNode;

	newNode = new QueueNode;
	newNode->value = num;
	newNode->next = NULL;

	if (rear) {
		rear->next = newNode;
	}
	else {
		front = newNode;
	}

	rear = newNode;
	numItems++;
}

void DynIntQueue::dequeue (int &num)
{
	QueueNode *nodePtr;

	if (front == NULL) {
		num = 0;
		cout << "Queue is empty.\n";
		return;
	}
	
	nodePtr = front->next;
	num = front->value;
	front = nodePtr;
	numItems--;

	if (numItems == 0)
		rear = NULL;
}

bool DynIntQueue::isEmpty() const
{
	bool status = true;
	if (numItems)
		status = false;

	return status;
}

void DynIntQueue::clear()
{
	QueueNode *nodePtr;

	nodePtr = front;
	while (nodePtr) {
		delete front;
		nodePtr = nodePtr->next;
		front = nodePtr;
	}
	rear = NULL;
}

