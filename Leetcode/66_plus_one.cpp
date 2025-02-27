#include <bits/stdc++.h>
#include "../headers/vector.hpp"

using namespace myVector;
using namespace std;

// leetcode: 66. Plus One

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();

        // start scanning the numbers from back
        for (int i = n - 1; i >= 0; i--)
        {
            // if the number is less than 9
            if (digits[i] < 9)
            {
                // simply increment the number and return
                digits[i]++;
                return digits;
            }

            // if the number is greater than 9 put zero
            digits[i] = 0;
        }

        // if 9 occurs as the first element
        // then put 1 at the front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{

    vector<int> digits1({1, 2, 3});
    vector<int> digits2({4, 3, 2, 1});
    vector<int> digits3({9, 9, 9, 9, 9, 9});
    vector<int> digits4({9});
    vector<int> digits5({9, 8, 7, 6, 5, 4, 3, 2, 1});

    Solution solve;

    print_container("Before: ", digits4);

    digits1 = solve.plusOne(digits4);

    print_container("After: ", digits4);

    return 0;
}