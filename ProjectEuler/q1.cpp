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

void multiplesOfThreeAndFive(int input){
    int multiplierThree = 3;
    int multiplierFive = 5;
    //using set for avoiding duplicates
    set<int>* storage = new set<int>(); 
    int output = 0;
    
    while(true){
        for(multiplierThree = 3; multiplierThree < input; multiplierThree = multiplierThree + 3){
            storage->insert(multiplierThree);
        }
        
        for(multiplierFive = 5; multiplierFive < input;  multiplierFive = multiplierFive + 5){
            storage->insert(multiplierFive);
        }
        
        break;
    }
    
    for ( auto member : *storage ){
        output = output + member;
    }
    
    cout << output << endl;
    
    delete storage;
}

int main(){
    int t = 1;
    // cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n = 10;
        // cin >> n;
        
        multiplesOfThreeAndFive(n);
    }
    
    
    return 0;
}
