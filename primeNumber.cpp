#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int limit = 100; // set the limit 
    vector<int>* list = new vector<int>();
    int count = 0;

    list->push_back(2);
    list->push_back(3);
    list->push_back(5);
    list->push_back(7);


    for(int i = 11; i < limit; i++){
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
            continue;
        }else{
            list->push_back(i);

            count++;
        }
    }

    for(auto n : *list){
        cout << n << ", ";
    }

    cout << endl << "Prime numbers: " << list->size() << endl;


    return 0;
}