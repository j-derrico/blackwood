//WEIGHTED EDGES!!!  KEEP TRACK OF WHICH CHOICES HAVE BEEN MADE ALONG WHICH STORYLINE
#ifndef Edge_H
#define Edge_H
#include "Node.h"
#include <memory>


using namespace std;

class Edge {
private:
  shared_ptr<Node> a;  // start node
  shared_ptr<Node> b;  // end node

public:
    Edge (shared_ptr<Node> start, shared_ptr<Node> end);
    int wt;
    ~Edge ();
    // get weight of edge
    int getWeight ();
    //set weight of edge
    void setWeight (int wt); 
    //get start node of edge
    shared_ptr<Node> getStart ();
    //get end node of edge
    shared_ptr<Node> getEnd();



};
#endif