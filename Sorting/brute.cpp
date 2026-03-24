#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[5] = {2, 4, 5, 3, 1};
    int n = 5;
    
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j] , arr[j+1]);
            }
            
        };
    };

    for(int h = 0 ; h < n ; h++){
        cout << arr[h] ;
    }

    return 0;
}