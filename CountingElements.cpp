#include <iostream>
#include <vector>
#include <map>

using namespace std;
//
// Created by Priyash on 4/7/2020.
//

class Solution {
    map<int,int>numbers;
public:
    Solution(){}
    int countElements(vector<int>& arr);
};

int Solution ::countElements(vector<int> &arr) {
    int totalCount = 0;
    map<int,int>::iterator itr;
    for(int i : arr){
        if(numbers.find(i) != numbers.end()){
            int count = numbers.find(i)->second;
            numbers[i] = count + 1;
        } else{
            numbers[i] = 1;
        }
    }

    for(map<int,int>::iterator itr = numbers.begin(); itr != numbers.end(); itr++){
        int number = itr->first;
        if(numbers.find(number + 1) != numbers.end()){
            totalCount += numbers[number];
        }
    }

    return totalCount;
}

int main(){


    Solution* sol = new Solution();
    vector<int> nums = {1,1,2,2};
    int count = sol->countElements(nums);
    cout<<count<<endl;
}

