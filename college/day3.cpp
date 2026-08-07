#include <iostream>
using namespace std;


class Node{
public:
    int data;
    Node* Next;
    

    Node(int val){
        data = val;
        Next = NULL;
    }

};

class Stack {
    Node* top;

public:
    int List(){
        top = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        newNode->Next = top;
        top = newNode;

    }

    void pop(){
        if(top == NULL){
            cout<<"stack is Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->Next;
        delete temp;
    }

    int topElement(){
        if(top == NULL){
            cout<<"stack is Underflow\n";
            return -1;
        }
        return top->data;
    }

    int traverse(int pos){
        Node* temp = top;
        while(top != NULL || top->Next == NULL || pos > 0){
            temp = temp->Next;
            pos--;


        }
        return temp->data;
    }



};

int main(){
    Stack st;
    int size;
    cout<< "size of stack : ";
    cin>> size;
    cout<<"enter the element to push : ";

    while(size > 0){
        int val;
        cin>> val;
        st.push_front(val);
        size--;
        

    }



}