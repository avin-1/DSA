#include <iostream>
#include <vector>
using namespace std;
int climbingStairs(int n,vector<int> &dp){
// Write Base cases
if(n==2){ 
    dp[2]=2;
    return 2;
}
if(n==3){ 
    dp[3]=3;
    return 3;
}

// if dp of n is -1 then we have already calculated it so use it. This maps to the second calling for the same thing
if(dp[n]!=-1){
    return dp[n];
}
// Calculate the current ans
dp[n] = climbingStairs(n-1,dp)+climbingStairs(n-2,dp);
return dp[n];

}

int main(){
    vector<int>dp(7,-1);
    cout<<climbingStairs(6,dp);
    return 0;
}