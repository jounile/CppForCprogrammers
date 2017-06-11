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

#include <vector>

using namespace str;

class Graph {

public:

	Graph(); // Constructor
	V (G); // returns the number of vertices in the graph
	E (G); // returns the number of edges in the graph
	adjacent (G, x, y); // tests whether there is an edge from node x to node y.
	neighbors (G, x); // lists all nodes y such that there is an edge from x to y.
	add (G, x, y); // adds to G the edge from x to y, if it is not there.
	delete (G, x, y); // removes the edge from x to y, if it is there.
	get_node_value (G, x); // returns the value associated with the node x.
	set_node_value( G, x, a); // sets the value associated with the node x to a.
	get_edge_value( G, x, y); // returns the value associated to the edge (x,y).
	set_edge_value (G, x, y, v); // sets the value associated to the edge (x,y) to v.	

private:

};

Graph::Graph(void) {
	cout << "Object is being created" << endl;
}

V (G) {

}

E (G) {

}

adjacent (G, x, y) {

}

neighbors (G, x) {

}

add (G, x, y) {

}

delete (G, x, y) {

}

int get_node_value (G, x) {

}

void set_node_value( G, x, a) {

}

int get_edge_value( G, x, y) {

}

void set_edge_value (G, x, y, v) {

}


// Main function for the program
int main( ) {
        cout << "Graph::main()" << endl;
        return 0;
}
