
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int value) {
        Node* newNode = new Node(value);

        newNode->next = top;
        top = newNode;

        cout << value << " pushed into stack.\n";
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow!\n";
            return;
        }

        Node* temp = top;
        cout << top->data << " popped from stack.\n";

        top = top->next;
        delete temp;
    }

    void peek() {
        if (top == nullptr) {
            cout << "Stack is empty!\n";
            return;
        }

        cout << "Top element: " << top->data << endl;
    }

    void display() {
        if (top == nullptr) {
            cout << "Stack is empty!\n";
            return;
        }

        Node* temp = top;

        cout << "Stack: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- STACK USING LINKED LIST ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.display();
            break;

        case 5:
            cout << "Program terminated.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}

