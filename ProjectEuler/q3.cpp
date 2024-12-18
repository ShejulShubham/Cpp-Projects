#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int>* primeListGenerator(int limit){
    vector<int>* list = new vector<int>();

    list->push_back(2);
    list->push_back(3);
    list->push_back(5);
    list->push_back(7);


    for(int i = 11; i < limit; i++){
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
            continue;
        }else{
            list->push_back(i);
        }
    }
    
    return list;
}

int getHighestPrimeNumber(vector<int>& primeList, int number){
    int output = 0;
    for(auto n : primeList){
        
        if(number < n) break;
        
        if(number % n == 0){
            output = n;     
        }
         
    }
    
    return output;
}


int main(){
    int limit = 400;
    vector<int>* primeList = primeListGenerator(limit);
    
    int t;
    // cin >> t;
    t = 1;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        // cin >> n;
        n = 17;
        cout << getHighestPrimeNumber(*primeList, n) << endl;
    }

    delete primeList;
    return 0;
}
