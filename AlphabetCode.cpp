//
// Created by Priyash on 3/7/2020.
//
#include <iostream>
#include <vector>

using namespace std;


class Solution{

public:
    vector<string> solution(int N, int K);
};

vector<string> Solution::solution(int N, int K) {
    if (N == 0) {
        return {""};
    }
    vector<string> result;
    for (string& p : solution(N - 1, K - 1)) {
        for (char l : string("abc")) {
            if (p.empty() || (p.back() != l)) {
                p.push_back(l);
                result.push_back(p);
                p.pop_back();
            }
        }
    }
    int pref_size = min((int) result.size(), K);
    return vector<string>(result.begin(), result.begin() + pref_size);
}

int main(){
    Solution* sol = new Solution();
    sol->solution(3,6);
}


