#pragma once
#include <iostream>

using namespace std;

template <typename T>
class Node {
public:
	T datum;
	Node<T> *leftChild, *rightChild;

	Node<String >(datum) : datum(datum){
		*leftChild = nullptr;
		*rightChild = nullptr;
	}
};
