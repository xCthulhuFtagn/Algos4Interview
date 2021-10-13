#include <iostream>

using namespace std;

class Node{
public:
    Node(){}
    Node(int input) : data(input){}
    int data;
    Node *left, *right;
};

//PyramidalTree
class Heap{
public:
    Heap() : root(nullptr) {}
    void Insert(int value){
        if(root){

        }
        else{
            root = new Node(value);
        }
    }
    Node* root;
};