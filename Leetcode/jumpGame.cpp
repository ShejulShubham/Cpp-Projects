#include <bits/stdc++.h>

// leetcode - 55. Jump Game

using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {

        int maxReach = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {

            if (i > maxReach)
                return false;

            maxReach = max(maxReach, i + nums[i]);

            if (maxReach >= n - 1)
                return true;
        }

        return false;
    }
};

int main()
{

    vector<int> *list = new vector<int>({2, 0});

    Solution solve;

    string result = solve.canJump(*list) ? "TRUE" : "FALSE";

    cout << "output: " << result << endl;

    return 0;
}
