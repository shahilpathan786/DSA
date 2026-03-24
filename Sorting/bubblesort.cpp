#include <iostream>
#include <vector>
using namespace std;


void bubblesort(int arr[] , int n){
    for(int i = 0 ; i < n-1 ; i++){
        bool isSwap = false;
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j + 1]);
                isSwap = true;

            }
        };

        if(!isSwap){
            return;
        };
    };

}

int main(){
    int arr[5] = {2, 4, 5, 3, 1};
    int n = 5;
    bubblesort(arr , n);

    for(int h = 0 ; h < n ; h++){
        cout << arr[h] ;
    }

    return 0 ;

}
