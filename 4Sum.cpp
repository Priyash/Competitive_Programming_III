//
// Created by Priyash on 2/29/2020.
//
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {

public:
    vector<vector<int>> fourSum(vector<int>& nums, int target);
private:
    void ksum(vector<int> nums, int k, int target, int beginIndex, vector<vector<int>>& result, vector<int>& list);
};

void Solution::ksum(vector<int> nums, int k, int target, int beginIndex, vector<vector<int>>& result, vector<int>& list) {
    if(k == 2) {
        int low = beginIndex;
        int high = nums.size() - 1;
        while (low < high) {
            int sum = nums[low] + nums[high];
            if (sum == target) {
                list.push_back(nums[low]);
                list.push_back(nums[high]);
                result.push_back(list);
                list.erase(list.end() - 1);
                list.erase(list.end() - 1);
                while (low < high && nums[low] == nums[low + 1]) {
                    low++;
                }
                while (low < high && nums[high] == nums[high - 1]) {
                    high--;
                }
                low++;
                high--;
            } else if (sum < target) {
                ++low;
            } else {
                --high;
            }
        }
        return;
    }
    for(int i = beginIndex; i <= nums.size() - k; ++i) {
        if(i > beginIndex && nums[i] == nums[i - 1])continue;
        list.push_back(nums[i]);
        int sum = target - nums[i];
        this->ksum(nums, k - 1, sum, i + 1, result, list);
        list.erase(list.end() - 1);
    }
    return;
}

vector<vector<int>> Solution::fourSum(vector<int> &nums, int target) {
    vector<vector<int>> result;
    vector<int> list;
    if(nums.size() < 4) return {};
    if(!nums.empty() || nums.size() != 0){
        sort(nums.begin(), nums.end());
        ksum(nums, 4, target, 0, result, list);
    } else {
        result = {};
    }

    return result;
}


int main(){

    Solution* sol = new Solution();
//    vector<int> nums = {1, 0, -1, 0, -2, 2};
//    int target = 0;

    vector<int> nums = {0};
    int target = 0;
    sol->fourSum(nums, target);
    return 0;
}



