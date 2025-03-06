#include <bits/stdc++.h>

using namespace std;

// leetcode: 20. Valid Parentheses

class Solution
{
public:
    bool validParenthesis(string s)
    {
        stack<char> st;
        unordered_map<char, char> mapping = {
            {')', '('},
            {'}', '{'},
            {']', '['}};

        for (char c : s)
        {
            if (mapping.find(c) != mapping.end())
            {
                if (st.empty() || mapping[c] != st.top())
                {
                    return false;
                }

                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        return st.empty();
    }
};

int main()
{
    string s1 = "()";
    string s2 = "(){}[]";
    string s3 = "(]";
    string s4 = "([])";

    vector<string> list;
    list.push_back(s1);
    list.push_back(s2);
    list.push_back(s3);
    list.push_back(s4);

    Solution solve;

    for (auto l : list)
    {
        cout << "is this a valid parenthesis? '" << l << "'" << endl;
        string result = solve.validParenthesis(l) ? "YES" : "NO";
        cout << "Answer: " << result << "\n";
    }

    return 0;
}