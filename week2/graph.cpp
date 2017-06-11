/*
 * Basic problem: 
 * Write a set of constructors for declaring and initializing a graph. 
 * An edge will have a positive cost that is its distance. 
 * Have a procedure that produces a randomly generated set of edges with positive distances. 
 * Assume the graphs are undirected. 
 * The random graph procedure should have edge density as a parameter and distance range as a parameter. 
 * So a graph whose density is 0.1 would have 10% of its edges picked at random and its edge distance would be selected at random from the distance range. 
 * The procedure should run through all possible undirected edges, say (i,j) and place the edge in the graph if a random probability calculation is less than the density. 
 * Compute for a set of randomly generated graphs an average shortest path.
 */

#include "priorityqueue.h"
#include "shortestpath.h"





Graph::Graph(void) {
	cout << "Object is being created" << endl;
}

Graph::~Graph(void) {
	cout << "Object is being deleted" << endl;
}

void Graph::V(G) {

}

void Graph::E(G) {

}

void Graph::adjacent (G, x, y) {

}

void Graph::neighbors (G, x) {

}

void Graph::add (G, x, y) {

}

void Graph::delete (G, x, y) {

}

int Graph::get_node_value (G, x) {

}

void Graph::set_node_value( G, x, a) {

}

int Graph::get_edge_value( G, x, y) {

}

void Graph::set_edge_value (G, x, y, v) {

}


// Main function for the program
int main( ) {
        cout << "Graph::main()" << endl;
	PriorityQueue pq;
	ShortestPath sp;

        return 0;
}
