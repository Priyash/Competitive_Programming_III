#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//
// Created by Priyash on 4/10/2020.
//


//class MinStack {
//    vector<int> mainStack;
//    vector<int> minStack;
//public:
//    MinStack() {}
//    void push(int x);
//    void pop();
//    int top();
//    int getMin();
//};
//
//void MinStack::push(int x) {
//    mainStack.push_back(x);
//    //if value x is less than or equal to minstack value have to push it , have to check equal or not not only less than.
//    /**
//     * ["MinStack","push","push","push","getMin","pop","getMin"]
//     * [[],[0],[1],[0],[],[],[]]
//     */
//    if(minStack.empty() || mainStack.back() <= minStack.back()){
//        minStack.push_back(x);
//    }
//}
//
//void MinStack::pop() {
//    if(mainStack.back() == minStack.back()){
//        minStack.pop_back();
//    }
//    mainStack.pop_back();
//}
//
//int MinStack::top() {
//    return mainStack.back();
//}
//
//int MinStack::getMin() {
//   return minStack.back();
//}

class MinStack {
    vector<pair<int,int>> stack;
public:
    MinStack() {}
    void push(int x);
    void pop();
    int top();
    int getMin();
};

void MinStack::push(int x) {
    if(stack.empty()){
        stack.push_back(make_pair(x,x));
    } else {
        int minVal = stack.back().second;
        stack.push_back(make_pair(x,min(minVal,x)));
    }
}

void MinStack::pop() {
    if(!stack.empty()){
        return stack.pop_back();
    }
}

int MinStack::top() {
    if(!stack.empty()){
        return stack.back().first;
    }
    return -1;
}

int MinStack::getMin() {
    if(!stack.empty()){
        return stack.back().second;
    }
    return -1;
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
