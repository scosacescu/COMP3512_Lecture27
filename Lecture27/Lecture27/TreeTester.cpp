#include "Tree.hpp"
#include "Node.hpp"
using namespace std;

int main() {
	//Node<>* n1 = new Node<>(string("Hello"));
	
	Node<> n = Node<string>("Hello");
	cout << n.datum.c_str() << endl;
	cin.get();
	
}