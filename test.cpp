#define private public
#include "Graph.h"
#include "Node.h"
#include "Edge.h"

#include <iostream>
#include <string>
#include <set>

using namespace std;

void contin (){
    cout <<endl << "Continue?  y/n" << endl << endl;
string cont;
cin >> cont;
if (cont == "y"){
    return;
}
else {
    exit(0);
}
}

int main () {



//creating test graph
shared_ptr<Graph> testGraph (new Graph);

//creating test nodes

shared_ptr<Node> a (new Node ("a"));
a->text = "Welcome to the test game, this is node a.  Would you like to go left or right?\n \na. left\nb. right";
a->achoice = 1;
a->bchoice = 2;
shared_ptr<Node> b (new Node ("b"));
b->text = "You have reached node b.  Would you like to go left or right?\n\na. left \nb. right";
b->achoice = 1;
b->bchoice = 2;
shared_ptr<Node> c (new Node ("c"));
c->text = "You have reached node c.  There's only one path from here, but I'm going to give you the illusion of choice.  Apples or oranges? \n\n a. apples \n b. oranges";
shared_ptr<Node> d (new Node ("d"));
d->text = "Congratulations, you landed at node d!";
shared_ptr<Node> e (new Node ("e"));
e->text = "This is node e, and unfortunately the end...";
shared_ptr<Node> f (new Node ("f"));
f->text = "Bienvenue a node f :)";



//creating test edges
shared_ptr<Edge> ab (new Edge (a, b));
ab->setWeight(1);
a->edges ++;
shared_ptr<Edge> ac (new Edge (a, c));
ac->setWeight (2);
a->edges ++;
shared_ptr<Edge> bd (new Edge (b, d));
bd->setWeight(1);
b->edges ++;
shared_ptr<Edge> be (new Edge (b, e));
be->setWeight(2);
b->edges ++;
shared_ptr<Edge> cf (new Edge (c, f));
c->edges ++;

//adding test nodes and edges to graph

testGraph->addNode (a);
testGraph->addNode (b);
testGraph->addNode (c);
testGraph->addNode (d);
testGraph->addNode (e);
testGraph->addNode (f);

testGraph->addEdge (ab);
testGraph->addEdge (ac);
testGraph->addEdge (bd);
testGraph->addEdge (be);
testGraph->addEdge (cf);


 /*
 testGraph:

       a
      / \
     b   c
    / \   \ 
   d   e   f 
   
   */


//testing nodes and edges added correctly
cout << "testing addNode() and addEdge()"<< endl << endl;
cout << "added nodes should be a, b, c, d, e, f,"<< endl << endl;
vector <shared_ptr<Node> > allnode = testGraph->getNodes ();
for (int j=0; j<allnode.size(); j++){
    
        cout <<allnode [j]-> key<< ", ";
    
}

cout << endl << endl << "added edges and weights should be" << endl <<" ab 1, ac 2, bd 1, be 2, cf 0, "<< endl << endl;
vector <shared_ptr<Edge> > alledge = testGraph->getEdges ();
for (int i=0; i<alledge.size(); i++){
   
        cout << alledge[i]->getStart()->key <<alledge[i]->getEnd ()->key << " "<<
        alledge[i]->getWeight() << ", ";
    
}

contin();

//testing setSource(), getSource(), setCurrent(), getCurrent()

bool testing = false;
testGraph->setSource(a);
if (testGraph->getSource() == a){
    testing = true;
    cout << endl << "setSource() and getSource() pass"<< endl << endl;
}


if (testGraph->getCurrent() == a){
    testing = true;
}
else {
    testing = false;
    cout << "setCurrent() and getCurrent() fail"<< endl << endl;
}

testGraph->setCurrent (2);
if (testGraph->getCurrent() == c){
    testing = true;
    cout << "setCurrent() and getCurrent() pass"<< endl << endl;
}
else {
     testing = false;
    cout << "setCurrent() and getCurrent() fail"<< endl << endl;
}

contin ();

//testing text format functions
cout<< "testing text format functions"<< endl << endl;
a->printFormatText ();
c->printFormatText();
f->printFormatText(); 

contin ();


//testing playGame () and quitNode ()

cout << "testing playGame() function" << endl << endl;
testGraph->clearCurrent();
testGraph->setCurrent(0);
testGraph->playGame(testGraph->getCurrent());

contin ();

cout << endl << endl << "testing quitNode() function, press q at any point to quit."<< endl;
shared_ptr<Node> quit (new Node ("quit"));
testGraph->addNode (quit);
testGraph->quitNode (quit);
testGraph->clearCurrent();
testGraph->setCurrent(0);
testGraph->playGame (testGraph->getCurrent());

contin ();

cout <<endl << "testing playgame () impact nodes"<< endl << endl;


//updating existing nodes
d->statechange = true;
d->changevar = 1;
d-> text = "this is node d.  Keep going?\n\na. Yes!\nb. Nah...";
d->achoice = 0;
d->bchoice = 9;
e->statechange = true;
e->changevar = 2;
e->text = "this is node e.  Carry on?\n\n a.  Yes, I can't wait!\nb. No, I'm bored of this...";
e->achoice = 0;
e->bchoice = 9;
//creating new nodes
shared_ptr<Node> g (new Node ("g"));
g->isimpact = true;
g->text = "It's true, this is node g--but wait! there's more!  Continue?\n\na. y \nb. n";
g->achoice = 0;
g->bchoice = 9;
shared_ptr<Node> h (new Node ("h"));
h->text = "You're here because you visited node d!";
shared_ptr<Node> i (new Node ("i"));
i->text = "You're here because you visited node e!";

//creating new edges
shared_ptr<Edge> dg (new Edge (d, g));
dg->setWeight (0);
d->edges ++;
shared_ptr<Edge> eg (new Edge (e, g));
eg->setWeight (0);
e->edges ++;
shared_ptr<Edge> gh (new Edge (g, h));
gh->setWeight (1);
g->edges ++;
shared_ptr<Edge> gi (new Edge (g, i));
gi->setWeight (2);
g->edges ++;



//adding new nodes and edges to graph
testGraph->addNode (g);
testGraph->addNode (h);
testGraph->addNode (i);

testGraph->addEdge (dg);
testGraph->addEdge (eg);
testGraph->addEdge (gh);
testGraph->addEdge (gi);
testGraph->quitNode (quit);

/*

testGraph:

       a
      / \
     b   c
    / \   \ 
   d   e   f 
    \ /
     g
    / \
   h   i
*/

testGraph->clearCurrent ();
testGraph->playGame (testGraph->getCurrent());

contin ();

testGraph->clearCurrent ();
testGraph->playGame (testGraph->getCurrent());

contin ();

testGraph->clearCurrent ();
testGraph->playGame (testGraph->getCurrent());





return 0;
}
