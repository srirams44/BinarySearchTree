#include "bst.h"
#include <iostream>
using namespace std;

BST::BST() { //Constructor intializes root
    root = nullptr;
}

BST::~BST() {
    deleteTree(root);
}

void BST::deleteTree(Node* node) { //Recursive function to delete nodes from tree
    if (node) {
        deleteTree(node->leftChild);
        deleteTree(node->rightChild);
        delete node;
    }
}

void BST::print() {
    if (!root) {
        cout << "Tree is empty" << endl;
        return;
    }
    printHelper(root, 0); //start with the root node and level 0
}

void BST::printHelper(Node* node, int level) {
    if (node == nullptr) {
        return; //Base case, if node is a nullptr, exit
    }

    printHelper(node->rightChild, level + 1); //print out right child

    for (int i = 0; i < level; ++i) {
        cout << "\t"; //add a tab for each level
    }

    cout << node->data << endl; //Print current node value

    printHelper(node->leftChild, level + 1); //print out left child
}

void BST::add(int value) {
    root = addHelper(root, value);
}

Node* BST::addHelper(Node* node, int value) {
    if (!node) { //Base case, if the current node is nullptr, drop the node here
        root = node;
    }
    if (node > root) { //If the node to add is

    }
}

