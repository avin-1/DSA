#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// A brute force solution would be to check every climb(n-1) and climb(n-2) for every stair  to reduce it we just cache it using dp
/*
dp[i] = minimum cost to reach step i
dp[0] = cost[0]
dp[1] = cost[1]
dp[i] = cost[i] + min(dp[i-1], dp[i-2])
*/

int minicost(vector<int>& cost) {
    int n = cost.size();
    vector<int> dp(n);
    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i = 2; i < n; i++)
        dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
    return min(dp[n-1], dp[n-2]);
}
int main(){
    vector<int> cost = {10,15,20};
    cout<<minicost(cost);
    return 0;
}