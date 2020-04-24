//
// Created by Priyash on 3/8/2020.
//
#include <iostream>
#include <vector>
#include <algorithm>
#define CONSTANT 1000000000

using namespace std;

class Solution{


public:
    int solution(vector<int> &A);

private:
    void ksum(vector<int> nums, int k, int target,int beginIndex, vector<vector<int>>& result, vector<int>& list);
};

int Solution::solution(vector<int> &A) {
    if(A.empty() || A.size() == 0){return 0;}
    if(A.size() < 2){return 0;}
    vector<vector<int>> result = {};
    vector<int>list = {};
    sort(A.begin(), A.end());
    ksum(A, 3, 0, 0, result, list);
    if(result.size() > CONSTANT) return -1;
    return result.size() << 1;
}

void Solution::ksum(vector<int> nums, int k, int target, int beginIndex, vector<vector<int>>& result, vector<int>& list) {
    if(k == 2){
        int low = beginIndex;
        int high = nums.size() - 1;

        while(low < high){
            int sum = nums[low] + nums[high];
            if(sum == target){
                list.push_back(nums[low]);
                list.push_back(nums[high]);
                result.push_back(list);
                list.erase(list.end() - 1);
                list.erase((list.end() - 1));
                while(low < high && nums[low] == nums[low + 1]) low++;
                while(low < high && nums[high] == nums[high - 1]) high--;
                low++;
                high--;
            } else if(sum < target){
                low++;
            } else{
                high--;
            }
        }
        return;
    }

    for(int i = beginIndex; i <= nums.size() - k; i++){
        if(i > beginIndex && nums[i] == nums[i - 1])continue;
        list.push_back(nums[i]);
        ksum(nums, k - 1, target - nums[i], i + 1, result, list);
        list.erase(list.end() - 1);
    }
    return;
}


int main(){
    Solution* sol = new Solution();
    vector<int>nums = {2, -2, 3, 0, 4, -7};
    int count = sol->solution(nums);
    cout<<count<<endl;
}
