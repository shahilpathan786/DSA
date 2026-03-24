#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;




// int main(){
//     vector <char> arr = {'a' , 'a' , 'b' , 'b' , 'b' , 'c' , 'c'};
//     int count = 1;
//     int pos = 0;

//     for(int i = 0; i < 7 ; i++){
//         if(arr[i] == arr[i + 1]){
//             count++;
//             pos++;
//         }
//         else if(arr[i] != arr[i + 1]){
//             arr.erase(arr.begin() + pos);
//             string pew = to_string(count);
//             arr.insert(arr.begin() + pos , pew);
//             pos = 0;
//             count = 1;
//         }
//     }

//     for(char k : arr){
//         cout << k << " ";
//     }
// }