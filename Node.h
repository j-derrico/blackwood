#ifndef NODE_H
#define NODE_H

#include <memory>
#include <iostream>
#include <string>



using namespace std;

/* struct Node {
    string key;     //'state' each node represents 
    string text;    //acutal text of story for each node
    int edges;      //number of edges for each node
    shared_ptr<Node> predecessor;  */ 

class Node {
    private:
        void printBorder ();
    
    public:
        Node (string node);
        string key;     //represents the state
        string text;    //acutal text of story for each node
        int achoice;    //edge weight corresponding to choice a 
        int bchoice;    //edge weight corresponding to choice b
        int edges;      //number of edges for each node
        shared_ptr<Node> predecessor;
        bool statechange;//tracks if there is an extra variable affecting node choices
        int changevar;  //if statechange is true, this is what the state var updates to
        bool isimpact;   //tracks if node is impacted by statevar
        ~Node ();


    //format text of each node, borders added etc
    void printFormatText ();
    int setExChoice (shared_ptr<Node> node);


};

#endif