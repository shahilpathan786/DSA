// remove all occurence

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // string str = "abcbcabc";
    // cout << str.find("abccccrdff")<< endl;
    // for(int i = 97 ; i <= 122 ; i++){
    //     cout << char(i) << " ";
    // }

    // return 0;

    // for ( int i = 0 ; i < 10 ; i++){
    //     for(int j = 0 ; j < i+1 ; j++){
    //         cout << "*";
    //     }
    //     cout << endl ;
    // }

    // int arr[7] = {3 , -4 , 5 , 4 , -1 , 7 , -8};
    // int n = 7;
    // int maxSum = INT16_MIN;
    // int currSum = 0;
    // for(int st = 0 ; st < n ; st++ ){
    //     int currSum = 0 ; 
    //     for(int end = st ; end < n ; end++){
    //         currSum += arr[end];
    //         maxSum = max(currSum , maxSum);

    //     }
    // }
    // cout << maxSum << endl;
    // return 0;

    // for(int st = 0 ; st < n ; st++){
    //     currSum += arr[st];
    //     maxSum = max(currSum , maxSum);
    //     if(currSum < 0){
    //         currSum = 0;
    //     }
    // }

    // cout<< maxSum<< endl;
    // return 0;
    // vector <int> vec = {1 , 1 , 1, 2, 1 , 3};
    // int feq = 0;
    // int ans = 0;
    // for(int i =0 ; i < vec.size() ; i++){
    //     if(feq == 0){
    //         ans = vec[i];
    //     }
    //     if(ans == vec[i]){
    //         feq++;

    //     } else {
    //         feq--;
    //     }

    // }
    // int price[6] = {7 , 1 , 5 , 3 , 6 , 4};
    // int n = 6;
    // int maxprofit = 0 ;
    // int bestbuy = price[0];
    // for(int i = 0 ; i < n ; i++){
    //     if(price[i] > bestbuy){
    //         maxprofit = max(maxprofit , price[i] - bestbuy);

    //     }
    //     bestbuy = min(bestbuy , price[i]);

    // }

    // cout << maxprofit << endl;




    // return maxprofit;
    int single[5] = {1, 2, 2, 3, 3};
    int n = 5;
    int end = n - 1;
    int st = 0;

    while (st <= end){
        int mid = (st + end)/2;
        int repo = n/2;
        if(single[mid] != single[mid-1] , single[mid] = single[mid + 1]) {
            cout << single[mid] << endl ;
            break;
        }
        if(repo%2 == 0){
             if(single[mid] == single[mid - 1]){
                end = mid - 1;
             } else {
                st = mid + 1;
             }
        } else {
            if(single[mid] == single[mid + 1]){
                end  = mid - 1;
            } else {
                st = mid + 1;
            }
        }

    }
    

}