#include <bits/stdc++.h>

using namespace std;


class Solution {
public:

    
    int removeElement(vector<int>& nums, int val) {
        
        for (std::vector<int>::iterator it = nums.begin(); 
                                        it != nums.end(); )
        {
            if (*it == val)
               it = nums.erase(it);
            else
                ++it;
        }

        return nums.size();
    }

    void print_container(const std::vector<int>& c)
    {
        for (int i : c)
            std::cout << i << ' ';
        std::cout << '\n';
    }
};


int main(){

    vector<int>* nums = new vector<int>({3, 2, 3, 2});
    int val = 3; // choose value to remove from list

    Solution solve; // stack memory
    
    cout << "Before remove list: ";
    solve.print_container(*nums);


    solve.removeElement(*nums, val);

    cout << "After remove list: ";
    solve.print_container(*nums);


    return 0;
};