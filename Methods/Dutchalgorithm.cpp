#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[10] = {2 , 0 , 2 , 1, 1, 0, 1, 2, 0, 0};
    int n = 10;
    int mid = 0;
    int low = 0;
    int high = n - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid] , arr[low]);
            mid++ , low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else {
            swap(arr[high] , arr[mid]);
            high--;
        }


    }

    for(int h = 0 ; h < n ; h++){
        cout<< arr[h];

    }
    return 0;
}