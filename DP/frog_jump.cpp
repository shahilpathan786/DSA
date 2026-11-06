#include <iostream>
using namespace std;
#include <vector>
#include <math.h>


int frogjump(vector<int> &stairs){
    int n = stairs.size();
    vector<int> dp(n);
    if(n == 1){
        return 0;
    }

    dp[0] = 0;
    dp[1] = abs(stairs[1] - stairs[0]);

    for(int i = 2 ; i < n ; i++){
        dp[i] = min(dp[i - 1] + abs(stairs[i] - stairs[i - 1]) , dp[i - 2] + abs(stairs[i] - stairs[i - 2]));
    }

    return dp[n - 1];

}


int main(){
    vector<int> height = {30 , 20 , 50 ,10 , 40};

    cout << frogjump(height) << endl;
}