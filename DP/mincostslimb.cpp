#include <iostream>
using namespace std;
#include <vector>



int mincost(vector<int> &min1){
    int n = min1.size();
    vector<int> dp(n+1);
    if( n == 1){
        return min1[0];

    }

    dp[0] = 0;
    dp[1] = 0;

    for(int i = 2 ; i <= n ; i++){
        dp[i] = min(dp[i - 1] + min1[i-1] , dp[i -2] + min1[i-2]);
    }

    return dp[n];

}

int main(){

    vector<int> min11 = {2 , 4, 6, 8, 9};

    cout<< mincost(min11) << endl;

    return 0;
}