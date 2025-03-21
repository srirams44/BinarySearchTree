#include "node.h"
#include <iostream>
//Quick comment for commit
Node::Node(int data) {
    this->data = data; //Using "this" allows me to distinguish the constructor from the actual variable
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}
Node::~Node() {
    data = 0;
    leftChild = rightChild = nullptr;
}
