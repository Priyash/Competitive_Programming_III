#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//
// Created by Priyash on 4/10/2020.
//

struct Node{
    int x;
    Node* next;
    int minVal;
    Node(int x): x(x), next(NULL), minVal(INT32_MAX){}
};

class MinStack {
    Node* root = NULL;
public:
    MinStack() {}
    void push(int x);
    void pop();
    int top();
    int getMin();
};

void MinStack::push(int x) {
    Node* curr = root;
    if(root == NULL){
        root = new Node(x);
        root->minVal = min(root->minVal, x);
        curr = root;
    } else{
        Node* newNode = new Node(x);
        newNode->minVal = min(root->minVal, x);
        newNode->next = root;
        root = newNode;
    }
}

void MinStack::pop() {
    Node* curr = root;
    if(root != NULL){
        root = root->next;
    }
}

int MinStack::top() {
    int data = 0;
    if(root != NULL){
        data = root->x;
    }
    return data;
}

int MinStack::getMin() {
    return root->minVal;
}


int main(){
    MinStack* minStack = new MinStack();
    minStack->push(2);
    minStack->push(0);
    minStack->push(3);
    minStack->push(0);

    cout<<minStack->getMin()<<endl;
    minStack->pop();
    cout<<minStack->getMin()<<endl;
    minStack->pop();
    cout<<minStack->getMin()<<endl;
    minStack->pop();
    cout<<minStack->getMin()<<endl;


    return 0;
}
