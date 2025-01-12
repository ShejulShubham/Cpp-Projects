#include <bits/stdc++.h>

using namespace std;

// 80. Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        cout << "Input: ";
        print_container(nums);

        if(nums.size() < 3)
            return nums.size();



        for(vector<int>::iterator it = nums.begin(); it != nums.end()-2;){
            vector<int>::iterator third = it+2;
            
            if(compareIteratorValues(it, third))
                it = nums.erase(it);
            else
                it++;

        }

        cout << "Output: ";
        print_container(nums);

        return nums.size();
    }

    bool compareIteratorValues(vector<int>::iterator& first, vector<int>::iterator& second){
        if(*first == *second)
            return true;
        else
            return false;
    }


    void print_container(vector<int>& list){

        for(auto n : list){
            cout << n << ", ";
        }
        cout << endl;
    }
};

int main(){

    vector<int>* nums = new vector({0,0,1,1,1,1,2,3,3});
    Solution* solve = new Solution();

    cout << solve->removeDuplicates(*nums);

    delete nums;
    delete solve;

    return 0;
};