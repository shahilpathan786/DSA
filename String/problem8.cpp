#include <iostream>
using namespace std;
#include <cctype>
#include <vector>
#include <string>

int main(){
    string s = " 12345cdr4";
    int num = 0;
    for(char ch : s){
        
        if(isdigit(ch) && ch != ' '){
             num = num*10 + (ch - '0');
        }
    }

    cout << num << endl;
    
}