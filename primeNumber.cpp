#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

bool isPrimeNumber(int n){
    int count = 0;

    for(int i = 1; i <= n; i++){
        if(n%i == 0)
            count++;
    }

    if(count == 2)
        return true;

    return false;
}

int main(){
    int limit = 100; // set the limit 
    vector<int>* list = new vector<int>({2, 3, 4, 5, 6, 7, 8, 9});
    


    for(auto& n : *list){
        cout << "Is " << n << " Prime Number? ";
        cout<< (isPrimeNumber(n) ? "YES" : "NO") << endl;
    }
    // FOLLOWING METHOD DOES NOT WORK
    // for(int i = 11; i < limit; i++){
    //     if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
    //         continue;
    //     }else{
    //         list->push_back(i);

    //         count++;
    //     }
    // }


    return 0;
}