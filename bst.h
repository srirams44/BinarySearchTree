#ifndef BST_H
#define BST_H
#include "node.h"
//Quick comment for commit


class BST {
public:
    BST();
    ~BST();
    void deleteTree(Node* node);
    void print();
    void add(int value);
    void search(int value);
private:
    Node* root;
    void printHelper(Node* node, int level);
    Node* addHelper(Node* node, int value);
    void searchHelper(Node* node, int value);

};



#endif //BST_H