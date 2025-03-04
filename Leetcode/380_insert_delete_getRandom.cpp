#include <bits/stdc++.h>

using namespace std;

// leetcode: 380. Insert Delete GetRandom O(1)

class RandomizedSet
{
private:
    unordered_map<int, int> valueToIndex;
    vector<int> values;

public:
    bool insert(int val)
    {
        // check if value exist in list
        if (valueToIndex.find(val) != valueToIndex.end())
        {
            return false; // value exist return false
        }

        // if not the add value to the end
        values.push_back(val);
        // then add it's index to the curresponding value(key)
        valueToIndex[val] = values.size() - 1;
        return true;
    }

    bool remove(int val)
    {
        // first check if value exist
        if (valueToIndex.find(val) == valueToIndex.end())
        {
            return false; // value does not exist return false
        }

        // second get the value index and get the last element
        int removeIndex = valueToIndex[val];
        int lastValue = values.back();

        // swap the value with last element
        values[removeIndex] = lastValue;
        valueToIndex[lastValue] = removeIndex;

        values.pop_back();
        valueToIndex.erase(val);
        return true;
    }

    int getRandom()
    {
        // get random number withing range
        int randomIndex = rand() % values.size();
        return values[randomIndex];
    }
};

/* 
Summary of States
Operation	        values	valToIndex	    Return Value
RandomizedSet()	      []	    {}	        null
insert(1)	         [1]	 {1: 0}	        true
remove(2)	         [1]	 {1: 0}	        false
insert(2)	        [1, 2]	 {1: 0, 2: 1}	true
getRandom()	        [1, 2]	 {1: 0, 2: 1}	2
remove(1)	        [2]	     {2: 0}	        true
insert(2)	        [2]	     {2: 0}	        false
getRandom()	        [2]	     {2: 0}	        2
*/

int main(){
    RandomizedSet randomizedSet;
    std::cout << randomizedSet.insert(1) << std::endl;   // true
    std::cout << randomizedSet.remove(2) << std::endl;   // false
    std::cout << randomizedSet.insert(2) << std::endl;   // true
    std::cout << randomizedSet.getRandom() << std::endl; // 1 or 2
    std::cout << randomizedSet.remove(1) << std::endl;   // true
    std::cout << randomizedSet.insert(2) << std::endl;   // false
    std::cout << randomizedSet.getRandom() << std::endl; // 2
    return 0;
}