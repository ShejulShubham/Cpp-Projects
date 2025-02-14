#include <bits/stdc++.h>

using namespace std;

// leetcode: 151. Reverse Words in a String

class Solution
{
public:
    string reverseWords(string s)
    {
        // step 1: trim spaces from start and end of the string
        int left = 0;
        int right = s.length() - 1;

        while (right >= left && isspace(s[left]))
            left++;

        while (right >= left && isspace(s[right]))
            right++;

        // step 2: catch all the words in container
        vector<string> words;
        string word;

        for (int i = left; i <= right; i++)
        {
            if (!isspace(s[i]))
            {
                word += s[i];
            }
            else if (word.size() > 0)
            {
                words.push_back(word);
                word = "";
            }
        }

        // collect last word
        if (word.size() > 0)
            words.push_back(word);

        // step 3: reverse the words
        string reverse = "";

        for (int j = words.size() - 1; j >= 0; j--)
        {
            if (j < words.size() - 1)
                reverse += " ";

            reverse += words[j];
        }

        return reverse;
    }
};

int main()
{
    vector<string> list;
    list.push_back("the sky is blue");
    list.push_back("  Hello   World  ");
    list.push_back("a good   example");

    Solution solve;

    for (auto s : list)
    {
        cout << "Before: " << s << endl;
        string r = solve.reverseWords(s);
        cout << "After: '" << r << "'" << endl;
    }

    return 0;
}