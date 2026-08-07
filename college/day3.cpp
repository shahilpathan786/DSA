#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* Next;

    Node(int val) {
        data = val;
        Next = nullptr;
    }
};

class Stack {
    Node* top;

public:

    Stack() {
        top = nullptr;
    }


    void push_front(int val) {
        Node* newNode = new Node(val);
        newNode->Next = top;
        top = newNode;

        cout << val << " pushed into stack.\n";
    }

    
    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow!\n";
            return;
        }

        Node* temp = top;
        cout << temp->data << " popped from stack.\n";
        top = top->Next;
        delete temp;
    }


    int topE() {
        if (top == nullptr) {
            cout << "Stack is Empty.\n";
            return -1;
        }

        return top->data;
    }


    void display() {
        if (top == nullptr) {
            cout << "Stack is Empty.\n";
            return;
        }

        cout << "Stack Elements: ";

        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->Next;
        }

        cout << endl;
    }
};

int main() {
    Stack st;
    int choice, value;

    do {
        cout << "\n STACK USING LINKED LIST\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top Element\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter value: ";
            cin >> value;
            st.push_front(value);
            break;

        case 2:
            st.pop();
            break;

        case 3:
            value = st.topE();
            if (value != -1)
                cout << "Top Element: " << value << endl;
            break;

        case 4:
            st.display();
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}