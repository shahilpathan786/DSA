#include <iostream>
using namespace std;
#include <vector>

// brute force approach
int fabo(int n){
    if( n <= 1){
        return n ;
    }

    return fabo(n-1) + fabo(n-2);
}
// memoizatioon
int fibDP(int n , vector<int> &f){
    if(n <= 1){
        return n;
    }

    if(f[n] != -1){
        return f[n];
    }

    return f[n] = fibDP(n-1 , f) + fibDP(n-2 , f);

}
// tabulation
int fibTab(int n){
    vector<int>Dp(n+1);
    Dp[0] = 0;
    Dp[1] = 1;

    for(int i = 2 ; i <=n ; i++){
        Dp[i] = Dp[i-1] + Dp[i-2];
    }

    return Dp[n];
}


int main(){

    int n = 7;
    vector<int> f(n+1 , -1);
    cout<< fibTab(n) << " ";
    return 1;
}