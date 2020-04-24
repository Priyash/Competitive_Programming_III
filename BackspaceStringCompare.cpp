#include <iostream>
#include <vector>
#include <deque>

using namespace std;
//
// Created by Priyash on 4/9/2020.
//

class Solution {
public:
    bool backspaceCompare(string S, string T);
    bool backspaceCompare2(string S, string T);

private:
    string getUpdatedString(string s);
    string getUpdatedStringOptimized(string s);
};

bool Solution::backspaceCompare(string S, string T) {
    string s = this->getUpdatedString(S);
    string t = this->getUpdatedString(T);
    return (s == t);
}

string Solution::getUpdatedString(string S) {
    char charHash = '#';
    int hashCount = 0;
    string updateStringForS = "";
    for(int i = S.length() - 1; i >= 0; --i){
        if(S[i] == charHash){
            hashCount++;
        } else {
            if(hashCount != 0){
                hashCount--;
                continue;
            } else {
                updateStringForS = S[i] + updateStringForS;
            }
        }
    }

    return updateStringForS;
}

bool Solution::backspaceCompare2(string S, string T) {
    string s = this->getUpdatedStringOptimized(S);
    string t = this->getUpdatedStringOptimized(T);
    return (s == t);

}

string Solution::getUpdatedStringOptimized(string s) {

    deque<char> charQueue;
    string finalString = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '#'){
            charQueue.push_back(s[i]);
        } else if(!charQueue.empty()){
            charQueue.pop_back();
        }
    }

    while(!charQueue.empty()){
        finalString += charQueue.front();
        charQueue.pop_front();
    }

    return finalString;
}

int main(){
    Solution* sol = new Solution();
    /**
     * "bxj##tw"
     * "bxo#j##tw"
     */
    string s1 = "bxj##tw";
    string s2 = "bxo#j##tw";

    bool status = sol->backspaceCompare2(s1, s2);
    cout<<status<<endl;
    return 0;
}

