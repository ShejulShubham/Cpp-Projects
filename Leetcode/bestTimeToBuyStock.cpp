#include<bits/stdc++.h>

using namespace std;

// leetcode: 121. Best Time to Buy and Sell Stock

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
    
            // return brute_force(prices);
            return kadane_algorithm(prices);
    
        }

    private:
    
        int brute_force(vector<int>& prices){
            int profit = 0;
    
            for(int i = 0; i < prices.size()-1; i++){
                for(int j = i+1; j < prices.size(); j++){
                    profit = max(profit, prices[j] - prices[i]);
                }
            }
    
            return profit;
        }
    
        int kadane_algorithm(vector<int>& prices){
            int minPrice = INT_MAX; // Initialize min price to a very large number
            int maxProfit = 0; // Initialize max profit as 0
    
            for (int price : prices) {
                minPrice = min(minPrice, price); // Update minimum price
                maxProfit = max(maxProfit, price - minPrice); // Calculate and update max profit
            }
    
            return maxProfit;
        }
    };

    int main(){

        vector<int>* prices = new vector<int>({2,1,2,1,0,1,2});

        Solution solve;

        int maxProfit = solve.maxProfit(*prices);

        maxProfit == 2 ? cout << "Answer is Correct" : cout << "Answer is Wrong";

        return 0;
    }