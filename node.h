#ifndef NODE_H
#define NODE_H



struct Node {
    explicit Node(int data);
    ~Node();
    int data;
    Node* leftChild;
    Node* rightChild;
};



#endif //NODE_H
