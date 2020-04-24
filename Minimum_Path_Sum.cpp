#include <iostream>
#include <vector>
#include <stack>

using namespace std;
//
// Created by Priyash on 4/18/2020.
//

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid);
    void dfs(vector<vector<int>> &grid, int i, int j, int& minSum, vector<vector<bool>>& visited);
};

int Solution::minPathSum(vector<vector<int>> &grid) {
    if(grid.empty()){
        return 0;
    }

    int row = grid.size();
    int col = grid[0].size();
    int dp[row][col];
    dp[0][0] = grid[0][0];
    for(int i = 1; i < col; ++i){
        dp[0][i] = dp[0][i - 1] + grid[0][i];
    }

    for(int i = 1; i < row; ++i){
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }

    for(int i = 1; i < row; ++i){
        for(int j = 1; j < col; ++j){
            dp[i][j] = grid[i][j] + min(dp[i][j - 1],dp[i - 1][j]);
        }
    }
    return dp[grid.size() - 1][grid[0].size() - 1];
}



int main(){
    Solution* sol = new Solution();
    vector<vector<int>> grid = {
            {1,3,1},
            {1,5,1},
            {4,2,1}
    };
    int minSum = sol->minPathSum(grid);
    cout<<minSum<<endl;

    return 0;
}
