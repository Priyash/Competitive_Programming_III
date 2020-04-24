//
// Created by Priyash on 3/8/2020.
//Inorder traversal in a tree without recursion
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution{
    vector<int> nodeList;
public:
    vector<int> inorderTraversal(TreeNode* root);
    vector<int> postorderTraversal(TreeNode* root);

    vector<int> getPreOrder(TreeNode *root);
};

vector<int> Solution::inorderTraversal(TreeNode *root) {
    vector<int> nodeList;
    TreeNode* currNode = root;
    stack<TreeNode*> nodeStack;
    while(currNode != NULL || !nodeStack.empty()) {
        if (currNode != NULL) {
            nodeStack.push(currNode);
            currNode = currNode->left;
        }
        else {
            currNode = nodeStack.top();
            nodeStack.pop();
            nodeList.push_back(currNode->val);
            currNode = currNode->right;
        }
    }

    return nodeList;
}

vector<int> Solution::postorderTraversal(TreeNode *root) {
    TreeNode* currNode = root;
    stack<TreeNode*> nodeList;
    vector<int> result;
    while(currNode != NULL || !nodeList.empty()){
        if(currNode != NULL){
            nodeList.push(currNode);
            currNode = currNode->left;
        } else {
            TreeNode* tempNode = nodeList.top()->right;
            if(tempNode == NULL){
                tempNode = nodeList.top();
                result.push_back(tempNode->val);
                nodeList.pop();
                while(tempNode != NULL && !nodeList.empty() && tempNode == nodeList.top()->right){
                    tempNode = nodeList.top();
                    nodeList.pop();
                    result.push_back(tempNode->val);
                }
            } else {
                currNode = tempNode;
            }
        }
    }

    return result;
}


vector<int> Solution::getPreOrder(TreeNode *root) {
    TreeNode* curr = root;
    stack<TreeNode*> nodeList;
    nodeList.push(root);
    vector<int> preOrder;
    while(!nodeList.empty()) {
        TreeNode* currNode = nodeList.top();
        preOrder.push_back(currNode->val);
        nodeList.pop();

        if(currNode->left){
            nodeList.push(currNode->left);
        }
        if(currNode->right){
            nodeList.push(currNode->right);
        }
    }

    return preOrder;
}



int main(){
    struct TreeNode *root = new TreeNode(1);
    root->left        = new TreeNode(2);
    root->right       = new TreeNode(3);
    root->left->left  = new TreeNode(4);
    root->left->right = new TreeNode(5);
    Solution* sol = new Solution();
    //sol->inorderTraversal(root);
    sol->postorderTraversal(root);
}
