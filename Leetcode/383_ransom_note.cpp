#include <bits/stdc++.h>

using namespace std;

// leetcode: 383. Ransom Note

class Solution
{
    public:
    bool canConstruct1(string ransomNote, string magazine)
    {
        unordered_map<char, int> frequency;

        for (char c : magazine)
        {
            frequency[c]++;
        }

        for (char a : ransomNote)
        {
            if (frequency[a] <= 0)
            {
                return false;
            }

            frequency[a]--;
        }

        return true;
    }

    bool canConstruct2(string ransomNote, string magazine){
        vector<int> frequency(26, 0);

        for(char c : magazine){
            frequency[c - 'a']++;
        }

        for(char s : ransomNote){
            if(frequency[s - 'a'] <= 0){
                return false;
            }

            frequency[s - 'a']--;
        }

        return true;
    }
};

int main()
{
    map<string, string> pairs = {
        {"aa", "ab"},
        {"a", "b"},
        {"kate", "market"}
    };

    Solution solve;

    for(auto pair : pairs){
        cout << "Is '" << pair.first << "' can be constructed using '" << pair.second << "'\n";
        string result = solve.canConstruct2(pair.first, pair.second) ? "YES" : "NO";
        cout << "Answer: " << result << endl;
    }

    return 0;
}