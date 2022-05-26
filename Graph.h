#ifndef GRAPH_H
#define GRAPH_H

#include "Node.h"
#include "Edge.h"
#include <vector>
#include <set>
#include <memory>
#include <string>

class Graph{
public:
  Graph();
  ~Graph();
 

  //return the location of pointer tracking current story location/state
  shared_ptr<Node> getCurrent ();

  //update location of current location, finds adjacent edges and chooses the one matching user input (based on edge weight), int weight as input
  //and each answer will correspond to a certain weight
  void setCurrent (int weight);

 //get adjacent edges.  I've updated this function to reflect the needs
 //for this particular graph--all edges are directed and it is impossible
 //for the user to move backwards
 set<shared_ptr<Edge> > getAdjacentEdges (shared_ptr<Node> node);

  //set start of story node
  void setSource (shared_ptr<Node> sourcenode);

  //get start of story node
  shared_ptr<Node> getSource();

  //add storyNode
  void addNode (shared_ptr<Node> n);

  //get nodes
  vector<shared_ptr<Node> > getNodes ();
  
  //get edges
  vector<shared_ptr<Edge> > getEdges();

  //add edge
  void addEdge (shared_ptr<Edge> e);


  //extracting edge weight value from user choice
  int choice (string userc, shared_ptr<Node> node);

  //clearing current node
  void clearCurrent ();
    
  //function to run through game graph  
  void playGame (shared_ptr<Node> node);

  //quit node edges
  void quitNode (shared_ptr<Node> quit);

  //set state node variable 
  void updateState (int var);


private:
  vector <shared_ptr<Node> > nodes;  //vector for all nodes in graph
  vector <shared_ptr<Edge> > edges; //vector for all edges in graph
  shared_ptr<Node> current;   //current node for changing states
  shared_ptr<Node> source;  //first story node
  int statevar;    //value of current state variable
  

  
};

#endif // Graph_H