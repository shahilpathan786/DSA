#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string name = "Shahil";
    reverse(name.begin() , name.end());
    cout<< name << endl;
}