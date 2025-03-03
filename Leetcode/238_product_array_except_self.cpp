#include <bits/stdc++.h>
#include "../headers/vector.hpp"

using namespace std;
using namespace myVector;

// leetcode : 238. Product of Array Except Self

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int>answer(n, 1);

        int prefix = 1;
        for(int i = 0; i < n; i++){
            answer[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for(int j = n-1; j >= 0; j--){
            answer[j] *= suffix;
            suffix *= nums[j];
        }

        return answer;
    }
};

/* Explanation of the Code:
Initialization:

We initialize the answer array with 1 because the product of no elements is 1 (neutral element for multiplication).

Prefix Product Calculation:

We traverse the array from left to right.

For each index i, we store the product of all elements to the left of i in answer[i].

We update the prefix variable by multiplying it with nums[i].

Suffix Product Calculation:

We traverse the array from right to left.

For each index i, we multiply the answer[i] (which already contains the prefix product) with the suffix product.

We update the suffix variable by multiplying it with nums[i].

Return the Result:

The answer array now contains the product of all elements except nums[i] for each index i.

Example Walkthrough:
Input: nums = [1, 2, 3, 4]
Prefix Calculation:

i = 0: answer[0] = 1, prefix = 1 * 1 = 1

i = 1: answer[1] = 1, prefix = 1 * 2 = 2

i = 2: answer[2] = 2, prefix = 2 * 3 = 6

i = 3: answer[3] = 6, prefix = 6 * 4 = 24

After this step, answer = [1, 1, 2, 6]

Suffix Calculation:

i = 3: answer[3] = 6 * 1 = 6, suffix = 1 * 4 = 4

i = 2: answer[2] = 2 * 4 = 8, suffix = 4 * 3 = 12

i = 1: answer[1] = 1 * 12 = 12, suffix = 12 * 2 = 24

i = 0: answer[0] = 1 * 24 = 24, suffix = 24 * 1 = 24

After this step, answer = [24, 12, 8, 6]

Output: [24, 12, 8, 6] */


int main()
{
    vector<int> problem({1, 2, 3, 4});

    Solution solve;

    vector<int> answer = solve.productExceptSelf(problem);

    print_container(answer);

    return 0;
}