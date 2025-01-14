#include <bits/stdc++.h>

using namespace std;

// leetcode: 169. Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int majorityElement = 0;
        int limit = nums.size() / 2;

        print_container("Before: ", nums);
        map<int, int>& freqList = elementFrequency(nums, limit);
        print_container("After: ", freqList);

        int compare = 0;

        for(auto& [key, value] : freqList){
            if(value > compare){
                majorityElement = key;
                compare = value;
            }
        }

        return majorityElement;
    }

    void print_container(string comment, vector<int>& list) {

        cout << comment;

        for (auto& n : list) {
            cout << n << ", ";
        }

        cout << "\n";
    }

    void print_container(string comment, map<int, int>& list) {

        cout << comment << endl;

        for (auto& [key, value] : list) {
            cout << "key: " << key << ", value: " << value;
            cout << "\n";
        }
    }

    map<int, int>& elementFrequency(vector<int>& list, int limit) {
        map<int, int>* mapList = new map<int, int>();

        for (auto& n : list) {
            (*mapList)[n]++;

            if((*mapList)[n] > limit)
                return *mapList;
        }

        return *mapList;
    }
};


int main(){

    vector<int>* list1 = new vector<int>({3,2,3});
    vector<int>* list2 = new vector<int>({2,2,1,1,1,2,2});
    Solution solve;

    solve.majorityElement(*list1);
    solve.majorityElement(*list2);


    delete list1;
    delete list2;

    return 0;
}