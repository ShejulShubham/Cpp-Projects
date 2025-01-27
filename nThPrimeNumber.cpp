#include <bits/stdc++.h>

using namespace std;

class Solution
{
public: 
    int findNThPrimeNumber(int n){
        vector<int>* primeNumbers = new vector<int>({2, 3, 5, 7});
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
                primeNumbers->push_back(i);
                counter++;
            }

            i++;
        }

        printContainer("Prime Numbers: ", *primeNumbers);

        return primeNumbers->at(n-1);
    }

    void printContainer(string message, vector<int>& list){
        cout << message;

        for(auto n : list){
            cout << n << " ";
        }

        cout << "\n";
    }
};

int main(){
    int n = 0;
    cout << "Enter Prime Number position: ";
    cin >> n;
    
    Solution solve;
    int prime = solve.findNThPrimeNumber(n);

    cout << "Prime Number at " << n << "th Position: " << prime << endl;



    return 0;
}