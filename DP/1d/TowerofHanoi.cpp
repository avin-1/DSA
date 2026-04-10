// Find  minimum number of moves for transfering all disc from A tower to Tower you have one C helper tower
#include <iostream>
using namespace std;

int helper(int n){
    // Base case is 2 and 3
    if(n==2) return 3;
    if(n==3) return 7;
    return 2*helper(n-1)+1;
}

int main(){
    cout<<helper(4);
    return 0;
}