//////////Kadanes algorith/////////////////////////////////////////

#include <iostream>
#include <vector>
using namespace std;

///////////////1.brite force code ///////////////////

// int main(){
//     int n = 5 ; 
//     int arr[5] = {1, 2, 3, 4, 5};
//     for(int st = 0 ; st < n ; st++){
//         for(int end = st ; end < n ; end++){
//             for(int i = st ; i <= end ; i++){
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0 ;
// }

// brute force approach for maximum subb aray

// int main(){
//     int arr[7] = {3 , -4 , 5 , 4, -1 , 7 , -8};
//     int maxSum = INT16_MIN;
//     for(int i = 0 ; i <= 7 ; i++){
//         int currSum = 0 ;
//         for(int st = i ; st < 7 ; st++){
//             currSum += arr[st];
//             maxSum = max(maxSum , currSum);
//         }
//     }
//     return maxSum ;
// }

// in this the time com[lexity is  around 0n3]\


// int main(){
//     int arr[7] = {3 , -4 , 5 , 4, -1 , 7 , -8};
//     int currSum = 0;
//     int maxSum = INT16_MIN;
//     for(int i = 0 ; )

// }

