#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n,vector<int> &dp){
    if(n==1) {
        dp[1] = 1;
        return 1;
    }
    if(n==2) {
        dp[2] =1;
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fibonacci(n-1,dp)+fibonacci(n-2,dp);
    return dp[n];
}
int main(){
    vector<int> dp(7,-1);
    cout<<fibonacci(6,dp);
    return 0;
}