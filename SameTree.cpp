#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
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
public:
    bool isSameTree(TreeNode* p, TreeNode* q);
    vector<int> getTreeArray(TreeNode* node);
};

bool Solution::isSameTree(TreeNode *p, TreeNode *q) {
    return this->getTreeArray(p) == this->getTreeArray(q);
}

vector<int> Solution::getTreeArray(TreeNode * pNode) {
    stack<TreeNode*> nodeList;
    vector<int> nodes;
    while(pNode != NULL || !nodeList.empty()){
        if(pNode != NULL){
            nodeList.push(pNode);
            pNode = pNode->left;
        } else {
            pNode = nodeList.top();
            nodes.push_back(pNode->val);
            nodeList.pop();
            pNode = pNode->right;
            if(pNode == NULL){
                nodes.push_back(-1);
            }
        }
    }
    pNode = NULL;
    return nodes;
}

int main(){
    Solution* sol = new Solution();

    TreeNode* root = new TreeNode(1);
    TreeNode* root_left = new TreeNode(1);
    TreeNode* root_right = new TreeNode(3);

    root->left = root_left;
    //root->right = root_right;

    TreeNode* root2 = new TreeNode(1);
    //TreeNode* root_left2 = new TreeNode(2);
    TreeNode* root_right2 = new TreeNode(1);

    //root2->left = root_left2;
    root2->right = root_right2;

    bool isMirrorTree = sol->isSameTree(root,root2);
    cout<<"Is mirror : "<<isMirrorTree<<endl;
}
