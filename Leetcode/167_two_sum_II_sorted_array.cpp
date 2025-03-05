#include <bits/stdc++.h>
#include "../headers/vector.hpp"

using namespace std;
using namespace myVector;

// leetcode: 167. Two Sum II - Input Array Is Sorted

class Solution
{
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        int left = 0;
        int right = numbers.size()-1;

        while(left < right){
            // step 1: get sum
            int sum = numbers[left] + numbers[right];

            // step 2: compare sum
            if(target == sum){
                // if the sum is equal to target return the result
                return {left+1, right+1};
            } else if (sum < target){
                // if sum is less than target increase the number
                left++;
            } else {
                // if sum is greater than target decrease the number
                right--;
            }
        }

        // if we don't find any answer return empty
        return {};
    }
};

int main()
{
    vector<int> problem1({-10, -8, -2, 1, 2, 5, 6});  // target 0, answer {3, 5}
    vector<int> problem2({1, 2, 3, 4, 4, 9, 56, 90}); // target 8, answer {4, 5}
    vector<int> problem3({2, 7, 11, 15});             // target 9, answer {1, 2}

    Solution solve;

    vector<int> result1;
    vector<int> result2;
    vector<int> result3;

    result1 = solve.twoSum(problem1, 0);
    result2 = solve.twoSum(problem2, 8);
    result3 = solve.twoSum(problem3, 9);

    print_container("First: ", result1);
    print_container("Second: ", result2);
    print_container("Third: ", result3);

    return 0;
}