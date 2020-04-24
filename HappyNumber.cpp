#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
//
// Created by Priyash on 4/6/2020.
//
class Solution {
public:
    Solution(){}
    bool isHappy(int n);
     int getDigitSquareSum(int n);
};
// 21 - > 5 ->29->85->89->145->42->20->4->16->37
bool Solution::isHappy(int n) {
    unordered_set<int> nonHappyNumbers;
    bool status = false;
    int result = n;
    while(1){
        int output = getDigitSquareSum(result);
        if(output == 1){
            return true;
        }
        if(nonHappyNumbers.find(output) != nonHappyNumbers.end()){
            return false;
        }
        nonHappyNumbers.insert(output);
        result = output;
    }
}

int Solution::getDigitSquareSum(int n) {
    int digitSum = 0;
    while(n != 0){
        int result = n % 10;
        digitSum +=  (result % 10) * (result % 10);
        n = n/10;
    }
    return digitSum;
}



int main(){
    Solution* sol = new Solution();
    int n = 19;
    bool isHappy = sol->isHappy(n);
    cout<<isHappy<<endl;
}
