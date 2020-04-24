#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
//
// Created by Priyash on 4/8/2020.
//



class Solution {

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs);

};


vector<vector<string>> Solution::groupAnagrams(vector<string> &strs) {
    map<string, vector<string>> anagramGroups;
    for(string word : strs){
        string wordTemp = word;
        sort(wordTemp.begin(), wordTemp.end());
        anagramGroups[wordTemp].push_back(word);
    }
    vector<vector<string>>result;
    map<string, vector<string>>::iterator itr;
    for(itr = anagramGroups.begin(); itr != anagramGroups.end(); ++itr){
        result.push_back(itr->second);
    }
    return result;
}

int main(){
    Solution* sol = new Solution();
    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> anagramGroups = sol->groupAnagrams(words);
    return 0;
}

