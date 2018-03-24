#pragma once
#include "Node.hpp"
#include <queue>

template <typename T = string>
class Tree {

public:
	Node<T>* root;
	Tree<T>(T datum){
		root = new Node<T>(datum);
	}

	//Insert a new node into the tree based on Level Order Traversal (BFS)
	//PRE: A value to create a new node from
	//POST: The tree will have one more node
	//modified from https://www.geeksforgeeks.org/insertion-binary-tree/
	void addNode(T datum) {
		Node<T>* newNode = new Node<T>(datum);			//node to be inserted
		queue<Node<T>*> queue;							//use a queue to keep track of position/progress
		queue.push(root);

		while (!queue.empty()) {

			Node<T>* temp = queue.front();
			queue.pop();

			if (!temp->leftChild) {
				temp->leftChild = newNode;
				break;
			}
			else
				queue.push(temp->leftChild);

			if (!temp->rightChild) {
				temp->rightChild = newNode;
				break;
			}
			else
				queue.push(temp->rightChild);
		}
	}

	//This print method is also based on Level Order traversal
	//PRE: A tree must exist (aka >= one node to traverse)
	//POST: The datum at each node in the tree will be displayed 
	void print() {
		queue<Node<T>*> queue;
		queue.push(root);

		while (!queue.empty()) {
			Node<T>* temp = queue.front();
			cout << temp->datum.c_str()<<endl;
			queue.pop();

			if (!temp->leftChild) {
				//break;
			}
			else
				queue.push(temp->leftChild);

			if (!temp->rightChild) {
				//break;
			}
			else
				queue.push(temp->rightChild);
		}
	}
};