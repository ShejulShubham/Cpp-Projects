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

list<int>* evenFibonacciList(int limit){
    list<int>* theList = new list<int>();
    
    int first = 1;
    int second = 2;
    int third = 0;
    
    for(int i = 0; i < limit; i++){
        
        third = first + second;
        first = second;
        second = third;
        
        if(first % 2 == 0){
            theList->push_back(first);
        }
    }
    
    return theList;
}

int getEvenFibonacciSumByLimit(list<int>& list, int limit){
    int output = 0;
    
    for(auto number : list){
        if(number > limit){
            break;
        }
        
        output = output + number;
    }
    
    return output;
}

int main(){
    int limit = 44;
    list<int>* list = evenFibonacciList(limit);
    
    int t;
    // cin >> t;
    t = 0;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        // cin >> n;
        n = 10;
        
        cout << getEvenFibonacciSumByLimit(*list, n) << "\n";
    }
    
    delete list;
    return 0;
}
