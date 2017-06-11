/* 
 * Graph header
 */

#include <iostream>
#include <string>
#include <vector>

using namespace str;

class Graph {

public:

       	Graph();   // This is the constructor declaration
        ~Graph();  // This is the destructor: declaration
        void V(G); // returns the number of vertices in the graph
        void E(G); // returns the number of edges in the graph
        void adjacent (G, x, y); // tests whether there is an edge from node x to node y.
        void neighbors (G, x); // lists all nodes y such that there is an edge from x to y.
        void add (G, x, y); // adds to G the edge from x to y, if it is not there.
        void delete (G, x, y); // removes the edge from x to y, if it is there.
        void get_node_value (G, x); // returns the value associated with the node x.
        void set_node_value( G, x, a); // sets the value associated with the node x to a.
        void get_edge_value( G, x, y); // returns the value associated to the edge (x,y).
        void set_edge_value (G, x, y, v); // sets the value associated to the edge (x,y) to v.

private:

};
