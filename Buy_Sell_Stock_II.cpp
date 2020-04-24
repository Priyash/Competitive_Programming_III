//
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// Created by Priyash on 4/19/2020.
//

class Solution {
public:
    int maxProfit(vector<int>& prices);
};

int Solution::maxProfit(vector<int> &prices) {
//    int dp[prices.size()];
//    dp[0] = 0;
//    for(int i = 1; i < prices.size(); ++i){
//        for(int j = 0; j < i; ++j){
//            if(prices[i] > prices[j]){
//                dp[i] = max(dp[i - 1],prices[i] - prices[j] + dp[j]);
//            } else {
//                dp[i] = dp[i - 1];
//            }
//        }
//    }
//    return dp[prices.size() - 1];
    int max_profit = 0;
    for(int i = 1; i < prices.size(); ++i){
        if(prices[i] > prices[i - 1]){
            max_profit += prices[i] - prices[i - 1];
        }
    }
    return max_profit;
}

int main(){
    Solution* sol = new Solution();
    vector<int> prices = {1,2,3,4,5};
    int profit = sol->maxProfit(prices);
    cout<<profit<<endl;

    return 0;
}

