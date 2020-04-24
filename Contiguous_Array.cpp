#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
//
// Created by Priyash on 4/13/2020.
//

class Solution {
public:
    int findMaxLength(vector<int>& nums);
};

int Solution ::findMaxLength(vector<int> &nums) {
    unordered_map<int,int> map;
    int sum = 0;
    int maxLen = 0;
    map[0] = -1;
    for(int i = 0; i < nums.size(); i++){
        sum = sum + (nums[i] == 0 ? -1 : 1);
        if(map.find(sum) != map.end()){
            maxLen = max(maxLen, i - map[sum]);
        } else {
            map[sum] = i;
        }
    }
    return maxLen;
}

int main(){

    Solution* sol = new Solution();
    vector<int> nums = {0, 1};
    //vector<int> nums = {0,0,0,1,1,1,0};
    //vector<int> nums = {0,1,1,0,1,1,1,0};
    //vector<int> nums = {0, 0, 1, 0, 1, 0, 0};
    //0,1,1,1,0,1,1,0
    //vector<int> nums= {0,0,1,1,1};
    int count = sol->findMaxLength(nums);
    cout<<count<<endl;
    return 0;
}