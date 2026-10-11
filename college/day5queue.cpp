
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class Deque {
    Node* front;
    Node* rear;

public:
    Deque() {
        front = nullptr;
        rear = nullptr;
    }

    void insertFront(int value) {
        Node* newNode = new Node(value);

        if (front == nullptr) {
            front = rear = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }

        cout << value << " inserted at front.\n";
    }

    void insertRear(int value) {
        Node* newNode = new Node(value);

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            newNode->prev = rear;
            rear->next = newNode;
            rear = newNode;
        }

        cout << value << " inserted at rear.\n";
    }

    void deleteFront() {
        if (front == nullptr) {
            cout << "Deque is empty!\n";
            return;
        }

        Node* temp = front;

        cout << temp->data << " deleted from front.\n";

        if (front == rear) {
            front = rear = nullptr;
        } else {
            front = front->next;
            front->prev = nullptr;
        }

        delete temp;
    }

    void deleteRear() {
        if (rear == nullptr) {
            cout << "Deque is empty!\n";
            return;
        }

        Node* temp = rear;

        cout << temp->data << " deleted from rear.\n";

        if (front == rear) {
            front = rear = nullptr;
        } else {
            rear = rear->prev;
            rear->next = nullptr;
        }

        delete temp;
    }

    void display() {
        if (front == nullptr) {
            cout << "Deque is empty!\n";
            return;
        }

        Node* temp = front;

        cout << "Deque: ";

        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    Deque dq;
    int choice, value;

    do {
        cout << "\n--- DEQUE USING LINKED LIST ---\n";
        cout << "1. Insert Front\n";
        cout << "2. Insert Rear\n";
        cout << "3. Delete Front\n";
        cout << "4. Delete Rear\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            dq.insertFront(value);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> value;
            dq.insertRear(value);
            break;

        case 3:
            dq.deleteFront();
            break;

        case 4:
            dq.deleteRear();
            break;

        case 5:
            dq.display();
            break;

        case 6:
            cout << "Program terminated.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}

