#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n = 15;
    int count = 0;
    int i = 1;
    while (i*i <= n){
        count++;
        i++;
    }
    cout << count << endl;

}