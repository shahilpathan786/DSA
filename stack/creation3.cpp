#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    stack <int> s;

    s.push(10);
    s.push(30);
    s.push(40);
    
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}