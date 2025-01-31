#ifndef MYHEADER_H
#define MYHEADER_H

#include <bits/stdc++.h>

using namespace std;

namespace myVector {

    template <typename T>
    void print_container(vector<T>& list){
        cout << "[ ";
        for(auto& val : list){
            cout << val << " ";
        }

        cout << "]\n";
    }

    template <typename T>
    void print_container(string message, vector<T>& list){
        cout << message;
        cout << "[ ";

        for(auto& val : list){
            cout << val << " ";
        }

        cout << "]\n";
    }

}


#endif