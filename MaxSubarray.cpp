#include <iostream>
#include <vector>
using namespace std;
//
// Created by Priyash on 4/15/2020.
//

class Solution {
public:
    int maxSubArray(vector<int>& nums);
};

int Solution::maxSubArray(vector<int> &nums) {
    vector<int>dp(nums.size(), 0);
    int maxSumValue = nums[0];
    dp[0] = nums[0];
    for(int i = 1; i < nums.size(); i++){
        dp[i] = max(dp[i - 1] + nums[i], nums[i]);
        maxSumValue = max(maxSumValue, dp[i]);
    }
    return maxSumValue;
}

int main(){
    Solution* sol = new Solution();
    vector<int> nums = {1 , 2};
    int maxValue = sol->maxSubArray(nums);
    cout<<maxValue<<endl;
    return 0;
}
