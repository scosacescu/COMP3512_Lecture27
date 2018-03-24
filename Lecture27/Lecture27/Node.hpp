#pragma once
#include <iostream>

using namespace std;

template <typename T = string>
class Node {
public:
	T datum;
	Node<T> *leftChild, *rightChild;

	Node<T>(T datum) : datum(datum){
		leftChild = nullptr;
		rightChild = nullptr;
	}
};
