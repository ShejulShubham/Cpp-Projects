#include <bits/stdc++.h>

using namespace std;

// leetcode: 392. Is Subsequence

class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int i = 0;
            int j = 0;
    
            while(i < s.length() && j < t.length()){
                if(s[i] == t[j])
                    i++;
    
                j++;
            }
    
            return i == s.length();
        }
};


int main(){

    string s = "abc";
    // string s = "abx";
    string t = "ahbgdc";

    Solution solve;

    string result = solve.isSubsequence(s, t) ? "TRUE" : "FALSE";

    cout << "s is subsequence of t? " << result;
    return 0;
}