#include "Node.h"
using namespace std;

Node::Node(string node){
    this->key = node;
    text = "";
    achoice = 0;
    bchoice = 0;
    edges = 0;
    predecessor = nullptr;
    statechange = false;
    changevar = 0;
    isimpact = false;
    
}

Node::~Node(){

}


void Node::printFormatText (){

    printBorder ();
    cout << this->text << endl<<endl;
}
 void Node::printBorder (){
    cout <<endl << "-------------------------------------------" << endl;
    cout << "*******************************************"<< endl;
    cout << "-------------------------------------------"<<endl<<endl;
}

