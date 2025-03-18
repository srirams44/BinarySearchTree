#include "node.h"
#include <iostream>

Node::Node(int Data) {
    this->data = Data; //Using "this" allows me to distinguish the constructor from the actual variable
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}
Node::~Node() {
    data = 0;
    leftChild = rightChild = nullptr;
}

