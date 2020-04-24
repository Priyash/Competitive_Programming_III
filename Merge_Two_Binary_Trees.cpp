#include <iostream>
#include <vector>
#include <stack>

using namespace std;
//
// Created by Priyash on 4/20/2020.
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2);
    TreeNode* merge(TreeNode* merged, TreeNode* t1, TreeNode* t2);
};

TreeNode *Solution::mergeTrees(TreeNode *t1, TreeNode *t2) {
    return this->merge(NULL, t1, t2);
}

TreeNode* Solution::merge(TreeNode *merged, TreeNode *t1, TreeNode *t2) {
    if(t1 == NULL)return t2;
    else if(t2 == NULL) return t1;

    if(t1->val != t2->val){
        TreeNode* newNode = new TreeNode(t1->val + t2->val);
        merged = newNode;
    } else {
        TreeNode* newNode = new TreeNode(t1->val);
        merged = newNode;
    }

    merged->left = this->merge(merged->left, t1->left, t2->left);
    merged->right = this->merge(merged->right, t1->right, t2->right);

    return merged;
}

int main(){
    Solution* sol = new Solution();
    TreeNode* t1 = new TreeNode(1);
    t1->left = new TreeNode(3);
    t1->left->left = new TreeNode(5);
    t1->right = new TreeNode(2);

    TreeNode* t2 = new TreeNode(2);
    t2->left = new TreeNode(1);
    t2->right = new TreeNode(3);
    t2->left->right = new TreeNode(4);
    t2->right->right = new TreeNode(7);

    TreeNode* merged = sol->mergeTrees(t1,t2);


    return 0;
}
