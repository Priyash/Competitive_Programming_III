#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//
// Created by Priyash on 4/12/2020.
//



class Solution {
public:
    int lastStoneWeight(vector<int>& stones);
};

int Solution::lastStoneWeight(vector<int> &stones) {
    int stonesLeft = 0;
    make_heap(stones.begin(),stones.end());

    while(stones.size() > 1){
        int y = stones.front();
        pop_heap(stones.begin(),stones.end());
        stones.pop_back();
        int x = stones.front();
        if(x != y) {
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            int newStone = y - x;
            stones.push_back(newStone);
            push_heap(stones.begin(), stones.end());
        } else if(y == x) {
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
        }
    }

    return stones.empty() ? 0 : stones[0];
}

int main(){
    Solution* sol = new Solution();
    vector<int> stones = {2,7,4,1,8,1};
    int weight = sol->lastStoneWeight(stones);
    cout<<weight<<endl;

    return 0;
}
