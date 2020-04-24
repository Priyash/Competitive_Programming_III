#include <iostream>
#include <stack>
#include <deque>
using namespace std;


//
// Created by Priyash on 4/16/2020.
//
class Solution {
public:
    bool checkValidString(string s);
    bool checkValidString_stack(string s);
};

bool Solution::checkValidString_stack(string s) {
    stack<int> leftBracketStack;
    stack<int> starStack;
    int index = 0;
    bool isValid = false;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '('){
            leftBracketStack.push(i);
        } else if(s[i] == '*'){
            starStack.push(i);
        } else{
            if(!leftBracketStack.empty())leftBracketStack.pop();
            else if(!starStack.empty())starStack.pop();
            else {
                return false;
            }
        }
    }
    while(!leftBracketStack.empty() && !starStack.empty()){
        if(leftBracketStack.top() > starStack.top())return false;
        leftBracketStack.pop();
        starStack.pop();
    }
    if(leftBracketStack.empty())return true;
    else return false;
}

bool Solution::checkValidString(string s) {
    int lo = 0;
    int hi = 0;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '('){
            lo++;
            hi++;
        } else if(s[i] == ')'){
            if(lo > 0){
                lo--;
            }
            hi--;
        } else {
            if(lo > 0){
                lo--;
            }
            hi++;
        }

        if(hi < 0) return false;
    }


    return lo == 0;
}


int main(){
    Solution* sol = new Solution();
    string s = "()";
    string s1 = "(*)";
    string s2 = "(*))";
    string s3 = ")()";
    string s4 = ")(";
    string s5 = "(*******************)";
    string s6 = "(*()";
    string s7 = "()()";
    string s8 = "((*)";
    string s9 = "(())((())()()(*)(*()(())())())()()((()())((()))(*";
    string s10 = "(())((())()()(*)(*()(())())())()()((()())((()))(*";

    //bool isValid = sol->checkValidString(s9);
    bool isValid = sol->checkValidString_stack(s9);
    cout<<isValid<<endl;


    return 0;
}
