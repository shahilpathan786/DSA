#include <iostream>
using namespace std;
#include <queue>

class circularQueue{
    int* arr;
    int cap , currSize;
    int f , r;

public :
    
    circularQueue(int value){
        cap = value;
        currSize = 0;
        arr = new int[cap];
        f = 0;
        r = -1;
    }

    void push(int data){
        if(currSize == cap){
            cout << "Queue is FUll\n";
            return;
        }

        r = (r + 1) % cap;
        arr[r] = data;
    }
    
    void pop(){
        if(empty()){
            cout << "CQ is empty\n";
            return;
        }

        f = (f + 1) % cap;
        currSize --;

    }

    int front(){
        if(empty()){
            cout << "CQ is empty\n";
            return;
        }
        return arr[f];
    }

    bool empty(){
        return currSize == 0;
    }

};

int main(){

}