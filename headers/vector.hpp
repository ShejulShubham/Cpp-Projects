#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <bits/stdc++.h>

using namespace std;

namespace myVector
{

    template <typename T>
    void print_container(vector<T> &list)
    {
        cout << "[";
        for (int i = 0; i < list.size(); i++)
        {
            if (i != 0)
                cout << ", ";

            cout << list[i];
        }
        cout << "]\n";
    }

    template <typename T>
    void print_container(string message, vector<T> &list)
    {
        cout << message;
        cout << "[";

        for (int i = 0; i < list.size(); i++)
        {
            if (i != 0)
                cout << ", ";
            cout << list[i];
        }

        cout << "]\n";
    }

    inline void reverse(vector<int> &container, int start, int end)
    {

        while (start < end)
        {
            int temp = container[start];
            container[start] = container[end];
            container[end] = temp;

            start++;
            end--;
        }
    }

}

#endif