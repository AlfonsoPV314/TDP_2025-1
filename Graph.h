#include "List.h"

class Graph{
public:
    int** M;    // adjacency matrix
    int V;   // number of vertices
    int E;  // number of edges
    Graph(int v);
    Graph(int v, List** l);   // create a graph from list of edges
    // Graph(int v, bool i[]);   // create a graph from island array
    ~Graph();
    void addEdge(int u, int v);   // add edge to graph
    void removeEdge(int u, int v);   // remove edge from graph
    List* getNeighbors(int v);   // get neighbors of vertex v
    List* getNodes();   // get all nodes
    bool isEmpty();   // check if graph is empty
    void printGraph();   // print graph
    bool isDominatingSet(bool currentSet[], int size);   // check if current set is dominating set
    void findAllMDS(bool currentSet[], int currentSetSize, bool bestSet[], int& bestSize, int pos, bool includedNodes[], int minSetSize);   // find all minimum dominating sets
};