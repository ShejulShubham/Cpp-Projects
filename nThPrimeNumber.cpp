#include <bits/stdc++.h>
#include "./headers/vector.hpp"
using namespace std;
using namespace myVector;

class Solution
{
public: 
    int findNThPrimeNumber(int n){
        vector<int>* primeNumbers = new vector<int>({2, 3, 5, 7});

        getPrimeNumber1(n, *primeNumbers);

        print_container("Prime Numbers: ", *primeNumbers);

        return primeNumbers->at(n-1);
    }


    void getPrimeNumber1(int n, vector<int>& list){

        int counter = 0;
        int i = 11;

        while(counter < n){
            int cnt = 0;
            for(int j = 1; j <= i; j++){
                if(i%j == 0)
                    cnt++;

                if(cnt > 2)
                    break;
            }

            if(cnt == 2){
                list.push_back(i);
                counter++;
            }

            i++;
        }
            
    }

    // FOLLOWING METHOD DOES NOT WORK
    // void getPrimeNumber2(int n, vector<int>& list){
    //     int counter = 0;
    //     int i = 11;

    //     for(int i = 11; counter < n; i++){
    //         if(i%2 == 0 || i%3 == 0 || i%5 == 0 || i%7 == 0 || i%9 == 0 || i%11 == 0)
    //             continue;
    //         else{
    //             list.push_back(i);
    //             counter++;
    //         }
    //     }
        
    // }

};

int main(){
    int n = 100;
    // cout << "Enter Prime Number position: ";
    // cin >> n;
    
    Solution solve;
    int prime = solve.findNThPrimeNumber(n);

    cout << "Prime Number at " << n << "th Position: " << prime << endl;



    return 0;
}