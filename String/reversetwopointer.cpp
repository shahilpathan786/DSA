#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string n = "shahil";
    int i = 0 , j = n.length() - 1;
    while(i < j){
        char temp = n[i];
        n[i] = n[j];
        n[j] = temp;
        i++;
        j--;
    }
    cout<< n <<endl;
    return 0;
}