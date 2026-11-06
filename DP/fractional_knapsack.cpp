#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>



static bool compare(vector<int>& a, vector<int>& b) {
    double a1 = (1.0 * a[0]) / a[1];
    double b1 = (1.0 * b[0]) / b[1];
    return a1 > b1;

}

double fractionalknapsack(vector<vector<int>> &items , int k){

    sort(items.begin() , items.end(), compare);
    int maxVal = 0.0;

    for(auto& items: items){
        int val = items[0];
        int wt = items[1];

        if(wt <= k){
            maxVal += val;
            k -= wt;
        }   else {
        maxVal += ((double)val / wt) * k;
        break;
    

    }}
}




int main(){
    vector<int> value = {60 , 100 , 120 , 80 , 150};
    vector<int> weight = {10 , 20 , 30 , 40 , 15};
    vector<int> ratio;

    int k = 60; 
    // k shows the capacity/////

    int n = value.size();

    for(int i = 0 ; i <= n ; i++){
        int p = value[i]/weight[i];
        ratio.push_back(p);
    }




}

