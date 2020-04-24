#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//
// Created by Priyash on 4/15/2020.
//

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums);
};

vector<int> Solution::productExceptSelf(vector<int> &nums) {

    vector<int>output(nums.size(), 1);
    int result = 1;
    for(int i = 0; i < nums.size(); ++i){
        output[i] = result ;
        result *= nums[i];
    }
    result = 1;
    for(int i = nums.size() - 1; i >= 0; --i){
        output[i] = result * output[i];
        result *= nums[i];
    }

    return output;
}


int main(){

    Solution* sol = new Solution();
    vector<int> nums = {1, 2, 3, 4};
    vector<int> out = sol->productExceptSelf(nums);
    for(int i : out){
        cout<<i<<endl;
    }
    return 0;
}


