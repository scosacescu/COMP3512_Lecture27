#include "Tree.hpp"
#include "Node.hpp"
#include "Activity2.hpp"

int main() {
	
	//Node<>* n = new Node<>(string("Hello"));
	//cout << n->datum.c_str() << endl;


	Tree<>* myLilTree = new Tree<>(string("Root Node"));
	//cout << myLilTree->root->datum.c_str() << endl;

	myLilTree->addNode(string("2"));
	myLilTree->addNode(string("3"));
	myLilTree->addNode(string("4"));
	myLilTree->addNode(string("5"));
	myLilTree->addNode(string("6"));
	myLilTree->addNode(string("7"));
	myLilTree->print();

	cin.get();
	
}