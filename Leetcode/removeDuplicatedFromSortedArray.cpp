#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;

        cout << "Before remove: ";
        print_container(nums);

        for(vector<int>::iterator it = nums.begin(); it != nums.end()-1;){
            if(*it == *(it+1)){
                it = nums.erase(it+1);
            }else{
                ++it;
            }
        }

        cout << "Before remove: ";
        print_container(nums);

        return k = nums.size();
    }


    void print_container(vector<int>& c){
        for(auto n : c){
            cout << n;
        }
        cout << "\n";
    }
};

int main(){

    vector<int>* nums = new vector<int>({0,0,1,1,1,2,2,3,3,4});

    Solution* solve = new Solution(); //heap memory

    solve->removeDuplicates(*nums);

    delete nums;
    delete solve;

    return 0;
}