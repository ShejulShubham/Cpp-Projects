#include <bits/stdc++.h>

using namespace std;

// leetcode: 58. Length of Last Word

class Solution {
    public:
        int lengthOfLastWord(string s) {
            int count = 0;
            int size = s.size()-1;
            char space = ' ';
    
            while(s[size] == space){
                size--;
            }
            
            
            for(int i = size; i >= 0; i--){
                if(s[i] == space)
                    break;
    
                count++;
            }
    
    
            return count;
        }
    };

int main(){
    string s = "   fly me   to   the moon  ";

    cout << "Input String: " << s << endl;

    Solution solve;

    int result = solve.lengthOfLastWord(s);

    cout << "Length of Last Word is: " << result << "\n";
    cout << "Which is Correct:  ";
    result == 4 ? cout << "TRUE" : cout << "FALSE";


    return 0;
}