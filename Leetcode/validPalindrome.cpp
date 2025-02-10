#include <bits/stdc++.h>

using namespace std;

// leetcode: 125. Valid Palindrome

class Solution {
    public:
        bool isPalindrome(string s) {
            string filtered;

            for(auto c : s){
                if(isalnum(c))
                    filtered.push_back(tolower(c));
            }

            int left = 0;
            int right = filtered.length()-1;

            while(left < right){
                if(filtered[left] != filtered[right])
                    return false;

                left++;
                right--;
            }

            return true;
        }
    
};

int main(){

    string s = "A man, a plan, a canal: Panama";
    vector<string> container;
    container.push_back(s);
    container.push_back("race a car");
    container.push_back(" ");


    Solution solve;

    for(auto v : container){
        string result = solve.isPalindrome(v)? "TRUE" : "FALSE";
    
        cout << v << ": " << "\n";
        cout << "Answer: " << result << endl;
    }
    

    return 0;
}

