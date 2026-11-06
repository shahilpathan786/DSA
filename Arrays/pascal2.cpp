#include <iostream>
using namespace std;
#include <vector>

int ncr(int n , int r){
    int res = 1;

    for(int i = 0 ; i < r ; i++){
        res = res*(n - i);
        res = res/(i + 1);

    }

    return res;

}

int main(){

    int r ;
    cout<<"choose which row to print : " << endl;
    cin >> r;
    for(int c = 0 ; c <= r ; c++){
        cout<< ncr(r , c) << " ";
    }

    cout << endl;

    return -1;

}