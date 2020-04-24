#include <iostream>
#include <vector>

using namespace std;

//
// Created by Priyash on 4/6/2020.
//
class Solution {
public:
    Solution(){}
    int singleNumber(vector<int>& nums) {
        int single = 0;
        for(int i : nums){
            single ^= i;
        }
        return single;
    }
};

int main(){
    Solution* sol = new Solution();
    vector<int> nums = {2,2,1};
    int single = sol->singleNumber(nums);
    cout<<single<<endl;
}
