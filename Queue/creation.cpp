#include <iostream>
using namespace std;
#include <vector>



class Node{
public :
    int data;
    Node* next;

    Node(int val){
        data = val;
        next  = NULL;
    }

};        

class List {
    Node* Head ;
    Node* Tail ;

public :
    List(){
        Head = Tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(Head == NULL){
            Head = Tail = newNode;
            return;
        } else {
            newNode->next = Head;
            Head = newNode;
        }

    }

    void push_rear(int val){
        Node* newNode = new Node(val);
        if(Head == NULL){
            Head = Tail = newNode;
            return;
        } else {
            Tail -> next = newNode;
            Tail = newNode;
        }

    };

    bool empty(){
        return Head = NULL;
    }

    void pop(){

    }

};

