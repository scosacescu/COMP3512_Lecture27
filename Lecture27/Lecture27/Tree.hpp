#pragma once
#include "Node.hpp"

template <typename T = string>
class Tree {
private: 
	
public:
	Node<T>* root;
	Tree<T>(T datum){
		root = new Node<T>(datum);
	}
	

};