#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//
// Created by Priyash on 4/15/2020.
//

class Solution {
public:
    void moveZeroes(vector<int>& nums);
};

void Solution::moveZeroes(vector<int> &nums) {
    int counter = 0;
    for(int i = 0; i < nums.size(); ++i){
        if(nums[i] != 0){
            nums[counter] = nums[i];
            counter++;
        }
    }
    while(counter < nums.size()){
        nums[counter] = 0;
        counter++;

    }
}

int main(){
    Solution* sol = new Solution();
    vector<int> nums = {0,1,0,3,12};
    sol->moveZeroes(nums);
    return 0;
}

