#include <iostream>
#include <vector>
using namespace std;

// Either you take current house or skip current 
// dp[i] = max(dp[i-1], dp[i-2] + nums[i])
int HouseRobber(vector<int> nums){
    int size = nums.size();
    vector<int> dp(size+1,-1);
    dp[0] = nums[0];
    dp[1] = max(nums[0],nums[1]);
    for(int i = 2;i<size;i++){
        int take = dp[i-2]+nums[i];
        int skip = dp[i-1];
        dp[i] = max(take,skip);
    }
    return dp[size-1];
}
int main(){
    vector<int> nums = {2, 7, 9, 3, 1};
    cout<<HouseRobber(nums);
    return 0;
}