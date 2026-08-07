#include <iostream>
#include <vector>
using namespace std;

class stack{
private:
    int *arr;
    int top;
    int capacity;
public:
    stack(int size){
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    void push(int val){
        if(top == capacity - 1){
            cout << "q"
        }
    }


};

