#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

//
// Created by Priyash on 4/19/2020.
//

class Solution {
public:
    int search(vector<int>& nums, int target);
    int binary_search(vector<int> nums, int lo, int hi, int target);
};

int Solution::search(vector<int> &nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int index = -1;
    while(low <= high){
        int mid = low + ((high - low) / 2);
        if(nums[low] <= nums[mid]){
            index = this->binary_search(nums,low,mid, target);
            if(index == -1){
                low = mid + 1;
            } else{
                break;
            }
        } else {
            index = this->binary_search(nums,mid + 1,high, target);
            if(index == -1){
                high = mid;
            } else{
                break;
            }
        }
    }

    return index;
}

int Solution::binary_search(vector<int> nums, int lo, int hi, int target) {

    int low = lo;
    int high = hi;
    int target_index = -1;
    while(low <= high){
        int mid = low + ((high - low) / 2);
        if(nums[mid] < target){
            low = mid + 1;
        } else if(nums[mid] > target){
            high = mid - 1;
        } else{
            target_index = mid;
            break;
        }
    }
    return target_index;
}

int main(){
    Solution* sol = new Solution();
    vector<int> nums = {4,5,6,7,0,1,2};
    //vector<int> nums = {6,7,8,9,1,2,3,4,5};

    int target = 1;
    int target_index = sol->search(nums, target);
    cout<<target_index<<endl;

    return 0;
}

