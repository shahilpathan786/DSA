#include <iostream>
using namespace std;
#include <queue>

class stack{
private:
    queue<int> p;
    int top = p.front();

public:
    void push(int val){
        p.push(val);
    }
    void pop(){
        p.pop();
        
    }


};

int main(){
    queue<int>q;
    q.push(1);
    q.push(4);
    q.push(7);

    while(!q.empty()){
        cout << q.front() << " " ;
        q.pop();
    }

    cout << " " << endl; 

    return 0;
}