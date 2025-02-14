# include <bits/stdc++.h>
#include "../headers/vector.hpp"

using namespace std;
using namespace myVector;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;// Reduce k to prevent unnecessary rotations


        // solution1(nums, k);
        solution2(nums, k);

    }

    void solution1(std::vector<int>& nums, int k) {//Input: (nums = {1, 2, 3, 4, 5}, k = 2)
        int n = nums.size();
        k = k % n; // Reduce k to prevent unnecessary rotations
        
        // Reverse the entire array
        reverse(nums, 0, nums.size());
        //output: {5, 4, 3, 2, 1}
        
        // Reverse the first k elements
        reverse(nums, 0, k);
        //output: {4, 5, 3, 2, 1}
        
        // Reverse the remaining n-k elements
        reverse(nums, k, nums.size());
        //output: {4, 5, 1, 2, 3}
    }

    void solution2(vector<int>& nums, int k){
        auto pos = nums.begin();

        for(int i = 0; i < k; i++){
            pos = nums.insert(pos, nums.back());

            nums.pop_back();
        }
    }
};

int main(){

    int k = 2; //number of times to rotate
    // cin >> k;  // use this to choose rotation

    vector<int>* nums = new vector<int>({1, 2, 3, 4, 5});

    Solution* solve = new Solution();

    solve->rotate(*nums, k);

    print_container(*nums);

    return 0;
};