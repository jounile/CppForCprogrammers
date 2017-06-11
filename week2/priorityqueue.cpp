/*
 * The value of the PriorityQueue is to always have access to the vertex with the next shortest link in the shortest path calculation at the top of the queue. 
 *
 */

#include <iostream>
 
using namespace std;

class PriorityQueue {

public: 
        // Constructor
	PriorityQueue():head(0):cursor(0) { }

	// Destructor
	~PriorityQueue();

	// Changes the priority (node value) of queue element.
	chgPrioirity(PQ, priority) { } 

	// Removes the top element of the queue.
	minPrioirty(PQ) { }

	// Does the queue contain queue_element.
	contains(PQ, queue_element) { }

	// Insert queue_element into queue
        insert(PQ, queue_element) { }

	// Returns the top element of the queue.
	top(PQ) { }

	// Return the number of queue_elements. 
	size(PQ) { }

private:


}

