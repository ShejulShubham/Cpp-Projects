#include<bits/stdc++.h>

using namespace std;

// leetcode: 28. Find the Index of the First Occurrence in a String

class Solution{
    public:
        int strStr(string haystack, string needle){
            int j = needle.size();

            for(int i = 0; (i+j) <= haystack.size(); i++){
                string compareString = haystack.substr(i, j);

                if(compareString == needle)
                    return i;
            }

            return -1;
        }
};


int main(){
    // answer: 0
    // string haystack{"sadbutsad"};
    // string needle{"sad"};

    // answer: -1
    // string haystack{"leetcode"};
    // string needle{"let"};

    // answer: 0
    string haystack{"a"};
    string needle{"a"};

    Solution solve;

    cout << "needle occurred in haystack at position: "<< solve.strStr(haystack, needle);
    cout << "\n";

    return 0;
}