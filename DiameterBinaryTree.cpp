#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
//
// Created by Priyash on 4/11/2020.
//

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    int maxDiameter = 0;
public:
    int diameterOfBinaryTree(TreeNode* root);
    int diameter(TreeNode* root);
};

int Solution::diameterOfBinaryTree(TreeNode *root) {
    if(root == NULL){
        return 0;
    }
    this->diameter(root);
    return maxDiameter;
}

int Solution::diameter(TreeNode *root) {
    if(root == NULL){
        return 0;
    }
    int leftTreeHeight = this->diameter(root->left);
    int rightTreeHeight = this->diameter(root->right);
    maxDiameter = max(maxDiameter, leftTreeHeight + rightTreeHeight);
    return 1 + max(leftTreeHeight, rightTreeHeight);
}


int main(){
    Solution* sol = new Solution();

    TreeNode* root = new TreeNode(1);
    TreeNode* left = new TreeNode(2);
    TreeNode* right = new TreeNode(3);
    TreeNode* leftChild = new TreeNode(4);
    TreeNode* rightChild = new TreeNode(5);
    TreeNode* rightrightChild = new TreeNode(6);


//    rightChild->right = rightrightChild;
//    left->left = leftChild;
//    left->right = rightChild;
    root->left = left;
    //root->right = right;

    int length = sol->diameterOfBinaryTree(root);
    cout<<length<<endl;
    return 0;
}
