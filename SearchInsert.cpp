//
// Created by Priyash on 3/7/2020.
//
#include<iostream>
#include <vector>

using namespace std;

class Solution{


public:
    int searchInsert(vector<int>& nums, int target);

private:
    int getIndexByBinarySearch(vector<int>& nums, int target);
    int getIndexByLinearSearch(vector<int>& nums, int target);
};

int Solution ::searchInsert(vector<int> &nums, int target) {
    int index = getIndexByBinarySearch(nums, target);
    if(index == -1){
        return getIndexByLinearSearch(nums, target);
    }
    return index;
}

int Solution::getIndexByBinarySearch(vector<int> &nums, int target) {
   int low = 0;
   int high = nums.size() - 1;
   int index = -1;
   while(low <= high){
       int mid = low + (high - low) / 2;
       if(nums[mid] > target){
           high = mid - 1;
       } else if(nums[mid] < target){
           low = mid + 1;
       } else if(nums[mid] == target){
            index = mid;
            break;
       }
   }
   return index;
}

int Solution::getIndexByLinearSearch(vector<int> &nums, int target) {
    int index = -1;
    if(nums.size() == 1){
        if(nums[0] > target){
            index = 0;
            return index;
        } else if(nums[0] == target){
            index = 0;
        } else{
            index = 1;
        }
    }
    else {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (i == 0 && nums[0] > target) {
                index = 0;
                break;
            } else if (nums[i] < target && nums[i + 1] > target) {
                index = i + 1;
                break;
            } else if (i == nums.size() - 2 && nums[nums.size() - 1] < target) {
                index = nums.size();
                break;
            }
        }
    }

    return  index;
}

int main(){
//    vector<int>input = {1,3,5,6};
//    int target = 5;

//    vector<int>input = {1,3,5,6};
//    int target = 7;

//    vector<int>input = {1};
//    int target = 2;

    vector<int>input = {1,3};
    int target = 3;

    Solution* sol = new Solution();
    sol->searchInsert(input, target);
}



