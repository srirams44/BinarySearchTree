#ifndef NODE_H
#define NODE_H
//Quick comment for commit

struct Node {
    explicit Node(int data);
    ~Node();
    int data;
    Node* leftChild;
    Node* rightChild;
    Node* parent{};
};

#endif //NODE_H