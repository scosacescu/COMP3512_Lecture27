#include "Tree.hpp"
#include "Node.hpp"

int main() {
	
	Node<>* n = new Node<>(string("Hello"));
	
	cout << n->datum.c_str() << endl;

	//

	Tree<>* myLilTree = new Tree<>(string("Josh is cute"));
	cout << myLilTree->root->datum.c_str() << endl;
	

	cin.get();
	
}