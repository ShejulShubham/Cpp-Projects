#include <bits/stdc++.h>

// leetcode - 13. Roman to Integer

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int romanValue = 0;

        map<string, int>& romanNumbers = getRomanMapContainer();

        romanValue = findIntegerValue(s, romanNumbers);

        return romanValue;
        
    }


private:

    int findIntegerValue(string roman, map<string, int>& list){
        int value = 0;

        for(int i = roman.size()-1; i >= 0; i--){
            string current(1, roman[i]);
            value += list[current];

            if(i > 0){
                string prev(1, roman[i - 1]);
                
                if((current == "V" || current == "X") && prev == "I"){
                    value -= 1;
                    --i;
                } else if((current == "L" || current == "C") && prev == "X"){
                    value -= 10;
                    --i;
                } else if((current == "D" || current == "M") && prev == "C"){
                    value -= 100;
                    --i;
                }
            }
        }


        return value;
    }

    map<string, int>& getRomanMapContainer(){
        map<string, int>* list = new map<string, int>();

        list->insert({"I", 1});
        list->insert({"V", 5});
        list->insert({"X", 10});
        list->insert({"L", 50});
        list->insert({"C", 100});
        list->insert({"D", 500});
        list->insert({"M", 1000});
        // list.insert("", 1);

        return *list;
    }

};

int main(){

    // string s = "MMMCMXCIX";

    vector<string> roman({"III", "LVIII", "MCMXCIV", "MMMCMXCIX"}); // {3, 58, 1994, 3999}

    Solution* solve = new Solution();

    for(auto s : roman){
        cout << solve->romanToInt(s) << "\n";
    }

    // cout << "Number: " << solve->romanToInt(s) << "\n";

}