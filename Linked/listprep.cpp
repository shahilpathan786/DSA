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

class List {
    Node* Head;
    Node* Tail;

public:
    List(){
        Head = Tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(Head == NULL){
            Head = Tail = newNode;
            return;
        } else {
            newNode -> Next = Head;
            Head = newNode;
        }
    }

    void pop_front(){
        if(Head == NULL){
            cout << "List is empty /n";
            return;
        }
        Node* temp = Head;
        Head = Head->Next;
        temp->Next = NULL;

        delete temp;

    }

    void PrintLL(){
        Node* temp = Head;
        while(temp != NULL){
            cout << temp -> data << "->";
            temp = temp -> Next;
        }
        cout << "NULL" << endl;
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(Head == NULL){
            Head = Tail = newNode;
        } else {
            Tail -> Next = newNode;
            Tail = newNode;
        }
    }

    void insert (int val , int pos){
        if(pos < 0){
            cout << "invalid postition\n";
            return;
        }

        if (pos == 0){
            push_front(val);
            return;
        }

        Node* temp = Head;
        for(int i = 0 ; i < pos - 1; i++){
            if(temp = NULL){
                cout << "Invalid pos\n";
                return;
            }
            temp = temp->Next;
        }
        Node* newNode = new Node(val);
        newNode->Next = temp->Next;
        temp->Next = newNode;


    }

    void pop_back(){
        if(Head == NULL){
            cout << "empty linked list\n";

        }
        Node* temp = Head;

        while(temp->Next != Tail){
            temp = temp->Next;
        }
        temp->Next = NULL;
        delete Tail;
        Tail = temp;


    }

    int Search(int key){
        Node* temp = Head;
        int idx = 0;
        while(temp -> Next != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->Next;
            idx++;
        }
        return -1;
    }


};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.pop_front();
    // ll.insert(9 , 2);
    ll.PrintLL();
    cout<< ll.Search(2) << endl;
    // ll.insert(9 , 2);


    return 0 ;

}


// reverse the linked list           