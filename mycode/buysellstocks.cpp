#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxP=0;
    int BestBuy[100000];
    BestBuy[0]=INT_MAX;
    for(int i=1;i < prices.size();i++){
        BestBuy[i] = min(BestBuy[i-1],prices[i-1]);
    }
    for(int i=0;i<prices.size();i++){
        int curr = prices[i]-BestBuy[i];
        maxP=max(maxP,curr);
    }
    return maxP;
}
