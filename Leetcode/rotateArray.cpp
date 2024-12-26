# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;// Reduce k to prevent unnecessary rotations


        solution1(nums, k);
        // solution2(nums, k);

    }

    void solution1(std::vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Reduce k to prevent unnecessary rotations
        
        // Reverse the entire array
        std::reverse(nums.begin(), nums.end());
        
        // Reverse the first k elements
        std::reverse(nums.begin(), nums.begin() + k);
        
        // Reverse the remaining n-k elements
        std::reverse(nums.begin() + k, nums.end());
    }

    void solution2(vector<int>& nums, int k){
        auto pos = nums.begin();

        for(int i = 0; i < k; i++){
            pos = nums.insert(pos, nums.back());

            nums.pop_back();
        }
    }
};

void print_container(vector<int>& container){

    for(auto element : container){
        cout << element <<" ";
    }

    cout << endl;
}

int main(){

    int k = 2; //number of times to rotate
    // cin >> k;  // use this to choose rotation

    vector<int>* nums = new vector<int>({1, 2, 3, 4, 5});

    Solution* solve = new Solution();

    solve->rotate(*nums, k);

    print_container(*nums);

    return 0;
};