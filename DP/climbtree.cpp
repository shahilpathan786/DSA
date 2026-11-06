#include <iostream>
using namespace std;
#include <vector>

// finding climbing stairs "memoization"////////
int climbDP(int n , vector<int> &ms){
    if(n == 1 || n == 2){
        return n;
    }

    ms[1] = 1;
    ms[2] = 2;

    if(ms[n] != -1){
        return ms[n];
    }

    return ms[n] = climbDP(n -1 ,ms) + climbDP(n - 2 ,ms);
}

// finding climbing stair using iteration /////////////

int climbDP2(int n){
    if(n == 1 || n == 2){
        return n;
    }
    vector<int> k(n+1);

    k[1] = 1;
    k[2] = 2;

    for(int i = 3 ; i <= n ; i++){
        k[i] = k[i - 1] + k[i - 2];
    }

    return k[n];
}
int main(){
    int n = 7;
    vector<int> ls(n + 1, -1);
    cout<< climbDP(n , ls) << " ";

}