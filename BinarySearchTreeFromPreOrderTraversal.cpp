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
    TreeNode* bstFromPreorder(vector<int>& preorder);
    TreeNode* construct(int start, int end, vector<int>preorder);
};

TreeNode *Solution::bstFromPreorder(vector<int> &preorder) {
    return this->construct(0, preorder.size(), preorder);
}

TreeNode* Solution :: construct(int start, int end, vector<int>preorder){
    if(start > end) return NULL;
    TreeNode* root = new TreeNode(preorder[start]);
    int i;
    for(i = start + 1; i < end; i++){
        if(preorder[start] < preorder[i]){
            break;
        }
    }
    root->left = this->construct(start + 1, i - 1, preorder);
    root->right = this->construct(i, end, preorder);

    return root;
}

int main(){
    Solution* sol = new Solution();
    vector<int> preorder = {8,5,1,7,10,12};
    //vector<int> preorder = {1, 2, 3, 4, 5, 6, 6, 6, 6, 6};
    TreeNode* node = sol->bstFromPreorder(preorder);
    return 0;
}
