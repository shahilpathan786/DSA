#include <iostream>
using namespace std;
#include <vector>

int main(){

    int ans = 1;
    int n;
    cout<<"choose the row : ";
    cin >> n;
    cout<< ans << " ";

    for(int i = 1 ; i < n ; i++){
        ans = ans*(n - i);
        ans = ans/i;
        cout << ans << " ";
    }

    return -1;

}