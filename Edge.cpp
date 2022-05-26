#include "Edge.h"

using namespace std;

Edge::Edge(shared_ptr<Node> start, shared_ptr<Node> end){
    a = start;
    b = end;
    wt = 0;
}

Edge::~Edge (){

}



int Edge::getWeight (){
    return this->wt;
}

void Edge::setWeight (int weight){
    this->wt = weight;
} 

shared_ptr<Node>Edge::getStart(){
    return this->a;
}

shared_ptr<Node>Edge::getEnd(){
    return this->b;
}