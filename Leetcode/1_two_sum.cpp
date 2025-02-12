#include <bits/stdc++.h>
#include "../headers/math.hpp"

using namespace std;
using namespace myMath;

// leetcode: 1. Two Sum

class Solution{
    public:
        vector<int> twoSums(vector<int>& nums, int target){
            vector<int> twoSums;

            for(int i = 0; i < nums.size()-1; i++){
                for(int j = i+1; j < nums.size(); j++){
                    if(target == sum(nums[i], nums[j])){
                        return {i, j};
                    }
                }
            }

            return twoSums;
        }
};

int main(){
    // vector<int>* nums = new vector<int>({2,7,11,15});
    // int target = 9; 
    // int answer[2] = {0, 1};
    
    
    vector<int>* nums = new vector<int>({3,3});
    int target = 6; //answer: [0, 1]
    int answer[2] = {0, 1};
    
    // vector<int>* nums = new vector<int>({3,2,4});
    // int target = 6; // answer: [1, 2]
    // int answer[2] = {1, 2};

    Solution solve;

    vector<int> result = solve.twoSums(*nums, target);

    cout << "is answer [" << answer[0] << ", " << answer[1] << "]?" << "\n";
    cout << "Actual Answer: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}