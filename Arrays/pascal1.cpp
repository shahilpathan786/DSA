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

    int n;
    int r;

    cout<< "choose the row : ";
    cin >> n;
    cout<< "choose the column : ";
    cin >> r;

    cout<< "loading......"<< endl;

    cout<< "The opted element is : ";
    cout<< ncr(n , r)<< endl;

    return -1;

}