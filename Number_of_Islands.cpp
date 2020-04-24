#include <iostream>
#include <vector>
#include <stack>

using namespace std;


//
// Created by Priyash on 4/17/2020.
//

class Solution {
public:

    int numIslands(vector<vector<char>>& grid);
    void dfs(vector<vector<char>>& grid, pair<int, int> index, vector<vector<bool>>& visited);
    void dfs_recursion(vector<vector<char>>& grid, pair<int, int> index);
    vector<pair<int,int>> getChildren(vector<vector<char>>& grid, pair<int, int> index);
};


int Solution::numIslands(vector<vector<char>> &grid) {
    if(grid.empty())return 0;
    int numisland = 0;
    //vector<vector<bool>> visited = vector<vector<bool>>(grid.size(),vector<bool>(grid[0].size(),0));
    for(int i = 0; i < grid.size(); ++i){
        for(int j = 0; j < grid[0].size(); ++j){
            if(grid[i][j] == '1'){
                this->dfs_recursion(grid, make_pair(i,j));
                numisland++;
            }
        }
    }
    return numisland;
}
void Solution::dfs(vector<vector<char>> &grid, pair<int, int> index, vector<vector<bool>>& visited) {
    stack<pair<int, int>> st;
    visited[index.first][index.second] = true;
    st.push(make_pair(index.first, index.second));
    while (!st.empty()) {
        pair<int, int> index = st.top();
        st.pop();
        vector<pair<int, int>> children = this->getChildren(grid, index);
        for (auto i : children) {
            if (!visited[i.first][i.second] && grid[i.first][i.second] == '1') {
                st.push(i);
                visited[i.first][i.second] = true;
            }
        }
    }

}

void Solution::dfs_recursion(vector<vector<char>> &grid, pair<int, int> index) {
//    grid[index.first][index.second] = '2';
//
//    if(index.first - 1 >= 0 && grid[index.first - 1][index.second] == '1') dfs_recursion(grid,make_pair(index.first - 1,index.second));
//    if(index.first + 1 < grid.size() && grid[index.first + 1][index.second] == '1') dfs_recursion(grid,make_pair(index.first + 1,index.second));
//    if(index.second + 1 < grid[0].size() && grid[index.first][index.second + 1] == '1') dfs_recursion(grid,make_pair(index.first,index.second + 1));
//    if(index.second - 1 >= 0 && grid[index.first][index.second - 1] == '1') dfs_recursion(grid,make_pair(index.first,index.second - 1));


    grid[index.first][index.second] = '2';

    if(index.first - 1 >= 0 && grid[index.first - 1][index.second] == '1') dfs_recursion(grid,make_pair(index.first - 1,index.second));
    if(index.first + 1 < grid.size() && grid[index.first + 1][index.second] == '1') dfs_recursion(grid,make_pair(index.first + 1,index.second));
    if(index.second + 1 < grid[0].size() && grid[index.first][index.second + 1] == '1') dfs_recursion(grid,make_pair(index.first,index.second + 1));
    if(index.second - 1 >= 0 && grid[index.first][index.second - 1] == '1') dfs_recursion(grid,make_pair(index.first,index.second - 1));

}

vector<pair<int,int>> Solution::getChildren(vector<vector<char>> &grid, pair<int, int> index) {
    vector<pair<int,int>> children;
    int childOffset[] = {-1, 1, -1, 1};

    if(index.second + childOffset[0] >= 0){
        children.push_back(make_pair(index.first, index.second + childOffset[0]));
    }

    if(index.second + childOffset[1] < grid[0].size()){
        children.push_back(make_pair(index.first, index.second + childOffset[1]));
    }

    if(index.first + childOffset[2] >= 0){
        children.push_back(make_pair(index.first + childOffset[2], index.second));
    }

    if(index.first + childOffset[3] < grid.size()){
        children.push_back(make_pair(index.first + childOffset[3], index.second));
    }



    return children;
}



int main(){
    Solution* sol = new Solution();
    vector<vector<char>> grid = {
            {'1','1','1','1','0'},
            {'1','1','0','1','0'},
            {'1','1','0','0','0'},
            {'0','0','0','0','0'}
    };

//    vector<vector<char>> grid = {
//            {'1','1','0','0','0'},
//            {'1','1','0','0','0'},
//            {'0','0','1','0','0'},
//            {'0','0','0','1','1'}
//    };

    int count = sol->numIslands(grid);
    cout<<count<<endl;


    return 0;
}

