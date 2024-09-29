#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0],day;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy = prices[i];
                day = i;
            } 
        }
        int sell = buy;
        for(int i=day;i<prices.size();i++){
           sell = max(sell,prices[i]);
        }
        int profit = sell-buy;
        return profit;
    }
};

int main(){
    Solution s ;
    vector<int>prices = {7,1,5,3,6,4};
    int n = s.maxProfit(prices);
    cout<<n;
}