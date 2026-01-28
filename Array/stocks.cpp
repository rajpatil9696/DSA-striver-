// in this probelm we have to find out the best time to buy and sell the stock which will give us maximum profit 
/*
#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini=prices[0]; // consider the first prise is minimum
    int maxProfit=0; // consider 0 profit initially 
    int n=prices.size();

    for(int i=0 ;i<n ;i++){
        int cost=prices[i]-mini; // this will we difference between sell and buy 
        maxProfit=max(maxProfit,cost);
        mini=min(mini,prices[i]);
    }
    return maxProfit;
}
*/