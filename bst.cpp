#include "bst.h"
#include <iostream>
using namespace std;
//Quick comment for commit

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
 if (!root) {
 root = new Node(value);
 return;
 }
 root = addHelper(root, value); // No need to reassign root
}

Node* BST::addHelper(Node* node, int value) {
 if (!node) {
 return new Node(value);
 }

 if (value < node->data) { //if less, go to the left child
 node->leftChild = addHelper(node->leftChild, value);
 }
 else if (value > node->data) { //if more go to the right
 node->rightChild = addHelper(node->rightChild, value);
 }
 //if duplicate, do nothing


 return node;
}

void BST::search(int value) {
 if (!root) {
 cout << "Tree is empty." << endl;
 return;
 }
 searchHelper(root, value);
}

void BST::searchHelper(Node* node, int value) {
 /*search from the root down the tree, compare the value you are reading in to the data of the current node
 *if the value read in is larger then the current nodes data, go to the right child
 *if the value read in is smaller then the curent nodes data, go to the left child
 *if the value read in is the same as the current nodes data, let the user know */
 if (!node) {
 cout << value << " is not in tree." << endl;
 return;
 }
 if (value == node->data) { //Check if value is equal
 cout << value << " is in tree." << endl;
 return;
 }

 if (value > node->data) { //Check if value is larger
 searchHelper(node->rightChild, value);
 }
 else{ //if not larger or equal, must be smaller
 searchHelper(node->leftChild, value);
 }
}
