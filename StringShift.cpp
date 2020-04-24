#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//
// Created by Priyash on 4/14/2020.
//

class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift);
    string performShiftOperation(int amount, string basicString, bool isLeftShift);
};

string Solution::stringShift(string s, vector<vector<int>> &shift) {
    int leftShiftAmount = 0;
    int righShiftAmount = 0;
    for(auto i : shift){
        vector<int> v = i;
        if(v[0] == 0){
            leftShiftAmount += v[1];
        } else if(v[0] == 1){
            leftShiftAmount -= v[1];
        }
    }

    if(leftShiftAmount < 0){
        s = performShiftOperation(leftShiftAmount, s, 0);
    } else if(leftShiftAmount == 0){
        return s;
    } else if(leftShiftAmount > 0){
        s = performShiftOperation(leftShiftAmount, s, 1);
    }
    return s;
}

string Solution::performShiftOperation(int amount, string s, bool isLeftShift) {
    if(isLeftShift){
        while(amount > 0){
            s = s.substr(1) + s[0];
            amount--;
        }
    } else if(!isLeftShift){
        int absAmount = abs(amount);
        while(absAmount > 0){
            s = s[s.length() - 1] + s.substr(0, s.length() - 1);
            absAmount--;
        }
    }
    return s;
}

int main(){
    Solution* sol = new Solution();
//    string s = "abcdefg";
//    vector<vector<int>> shift = {{1,1},{1,1},{0,2},{1,3}};
    /*
     * "wpdhhcj"
     * [[0,7],[1,7],[1,0],[1,3],[0,3],[0,6],[1,2]]
     * left -> 7 + 3 + 6 = 16
     * right -> 7 + 0 + 3 +2 = 12
     * 4
     * "yisxjwry"
     * [[1,8],[1,4],[1,3],[1,6],[0,6],[1,4],[0,2],[0,1]]
     * left -> 8 + 4 + 3 + 6 + 4 + 1 = 26
     * right -> 6 + 2 + 1 = 9
     * 17
     *
     * "xqgwkiqpif"
     * [[1,4],[0,7],[0,8],[0,7],[0,6],[1,3],[0,1],[1,7],[0,5],[0,6]]
     *
     */


//    string s = "abc";
//    vector<vector<int>> shift = {{0, 1},{1, 2}};

//    string s = "wpdhhcj";
//    vector<vector<int>> shift = {{0,7},{1,7},{1,0},{1,3},{0,3},{0,6},{1,2}};

    string s = "xqgwkiqpif";
    vector<vector<int>> shift = {{1,4},{0,7},{0,8},{0,7},{0,6},{1,3},{0,1},{1,7},{0,5},{0,6}};

    string finalString = sol->stringShift(s, shift);
    cout<<finalString<<endl;


    return 0;
}
