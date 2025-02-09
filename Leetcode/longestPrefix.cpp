#include <bits/stdc++.h>

using namespace std;

// leetcode: 14. Longest Common Prefix

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string prefix = "";

            if(strs.empty())
                return prefix;

            prefix = strs[0];
    
            for(int i = 0; i < prefix.size(); i++){
                char currentCharacter = prefix[i];

                for(int j = 1; j < strs.size(); j++){
                    if(i >= strs[j].size() || strs[j][i] != currentCharacter)
                        return prefix.substr(0, i);
                }
            }
    
            return prefix;
        }
};

int main(){

    vector<string>* strs1 = new vector<string>({"flower","flow","flight"});
    vector<string>* strs2 = new vector<string>({"dog","racecar","car"});

    Solution solve;
    
    cout << "Expected Longest Prefix1: " << "fl" << endl;
    cout << "Expected Longest Prefix2: " << "" << endl;


    cout << "Longest Prefix1: " << solve.longestCommonPrefix(*strs1) << endl;
    cout << "Longest Prefix2: " << solve.longestCommonPrefix(*strs2) << endl;


    return 0;
}