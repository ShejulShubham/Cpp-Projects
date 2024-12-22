#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:

    void solutionOne(vector<int>& nums1,
                            int sizeOfNums1,
                    vector<int>& nums2,
                            int sizeOfNums2)
    {
        int i = sizeOfNums1;

        for (int j = 0; j < sizeOfNums2; j++){
            nums1[i] = nums2[j];
            i++;
        }

        sort(nums1.begin(), nums1.end());
    }

    void solutionTwo(vector<int>& nums1,
                            int sizeOfNums1,
                    vector<int>& nums2,
                            int sizeOfNums2
                            )
    {
        int m = sizeOfNums1 - 1;
        int n = sizeOfNums2 - 1;
        int k = sizeOfNums1 + sizeOfNums2 - 1;

        while(n >= 0){
            if(m >= 0 && nums1[m] > nums2[n]){
                nums1[k--] = nums1[m--];
            }else {
                nums1[k--] = nums2[n--];
            }
        }
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0){
            nums1 = nums2;
            return;
        }

        solutionOne(nums1, m, nums2, n);
        // solutionTwo(nums1, m, nums2, n);
    }
};

int main(){


    vector<int>* nums1 = new vector<int>();
    nums1->push_back(1);
    nums1->push_back(2);
    nums1->push_back(3);
    nums1->push_back(0);
    nums1->push_back(0);
    nums1->push_back(0);

    vector<int>* nums2 = new vector<int>();
    nums2->push_back(2);
    nums2->push_back(5);
    nums2->push_back(6);
    
    Solution* solve = new Solution(); // Head memory
    
    solve->merge(*nums1, 3, *nums2, 3);

    for(auto num : *nums1)
        cout << num << " ";
    cout << endl;

    delete nums1;
    delete nums2;
    delete solve;
    
    return 0;
}