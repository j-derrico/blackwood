
#include "Graph.h"

using namespace std;



Graph::Graph(){
    current = nullptr;
    source = nullptr;
    statevar = 0;
};
Graph::~Graph(){

};
 

//return the location of pointer tracking current story location/state
shared_ptr<Node> Graph::getCurrent (){
      if (current == nullptr){
          current = source;
      }
      return current;
}

//update location of current location, finds adjacent edges and chooses the one matching user input (based on edge weight), int weight as input
//and each answer will correspond to a certain weight
void Graph::setCurrent (int weight){
    //if current hasn't been set yet
    if (current == nullptr){
        current = source;
    }
    //pointer to edge
    shared_ptr<Edge> e; 
    //pointer to node
    shared_ptr<Node> next;
    //get adjacent edges of current node
    set<shared_ptr<Edge> > adedge = getAdjacentEdges (current);
    for (set<shared_ptr<Edge> >::iterator it= adedge.begin(); it != adedge.end(); it++){
    e = *it; 
    if (e->getStart() == current && e->getWeight() == weight){
        current->predecessor = current;
      next = e->getEnd();
      current = next;
    }

    }
}

//get adjacent edges of node
set<shared_ptr<Edge> > Graph::getAdjacentEdges (shared_ptr<Node> node){
    //initializing return set
   set<shared_ptr<Edge> > ret;
    //iterating over edges stored in edges vector 
    for (vector<shared_ptr<Edge> >::iterator it = edges.begin(); it != edges.end(); it++) {
    shared_ptr<Edge> edge = *it;
    //if the edge's start node == search node, add it to the set of
    //adjacent edges
    if (edge->getStart() == node) {
      ret.insert(edge);
    }
  }
  return ret;
} 

//set start of story node
void Graph::setSource (shared_ptr<Node> sourcenode){
    source = sourcenode;
}

//get start of story node
shared_ptr<Node> Graph::getSource(){
    return source;
}

//add storyNode
void Graph::addNode (shared_ptr<Node> n){
    nodes.push_back (n);
}

vector<shared_ptr<Node> > Graph::getNodes() {

  return nodes;
}

vector <shared_ptr<Edge> > Graph::getEdges (){
    return edges;
}

//add edge
void Graph::addEdge (shared_ptr<Edge> e){
    edges.push_back (e);
}

 int Graph::choice (string userc, shared_ptr<Node> node){
    while (userc == "q" || userc == "Q" || userc == "a" || userc == "A" || userc == "b" || userc == "B"){
    if (userc == "q" || userc == "Q"){
        return 9;
    }
    else {
        if (userc == "a" || userc == "A"){
            return node ->achoice;
        }
        if (userc == "b" || userc == "B"){
            return node ->bchoice;
        }
    }

}
    cout << "Error: please choose a or b, or press q to quit."<< endl << endl;
    string x;
    cin >> x;
    return choice (x, node);
}

void Graph::clearCurrent(){
    current = nullptr;
}

void Graph::playGame(shared_ptr<Node> node){
   //checking to see if it's an end or quite node
   if (node->edges == 0){
       node->printFormatText();
       cout << "Thank you for playing.";
       return;
   }
   //print node's text
   node->printFormatText();
   string userchoice;
   cin >> userchoice;
   //checking to see if this node effects statevar
   if (node->statechange == true){
       updateState (node->changevar);
   }
   //check to see if this node is impacted by statevar
    if (node->isimpact == true){
        setCurrent (statevar);
        playGame (current);
    }
   //otherwise proceed as usual based on userchoice
   else {
   int weight = choice (userchoice, node);
   setCurrent (weight);
   
   playGame(current);
   }
} 

void Graph::quitNode (shared_ptr<Node> quit){
    for (int i=0; i<nodes.size(); i++){
        if (nodes[i]->edges !=0){
            shared_ptr<Edge> edge (new Edge (nodes[i], quit));
            edge->setWeight(9);
            edges.push_back(edge);
        }
    }
}

void Graph::updateState (int var){
    statevar = var;
}


