 
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

class CircularQueue {
    Node* rear;

public:
    CircularQueue() {
        rear = nullptr;
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (rear == nullptr) {
            rear = newNode;
            rear->next = rear;
        } else {
            newNode->next = rear->next;
            rear->next = newNode;
            rear = newNode;
        }

        cout << value << " inserted into queue.\n";
    }

    void dequeue() {
        if (rear == nullptr) {
            cout << "Queue is empty!\n";
            return;
        }

        Node* front = rear->next;

        cout << front->data << " deleted from queue.\n";

        if (rear == front) {
            rear = nullptr;
        } else {
            rear->next = front->next;
        }

        delete front;
    }

    void display() {
        if (rear == nullptr) {
            cout << "Queue is empty!\n";
            return;
        }

        Node* front = rear->next;
        Node* temp = front;

        cout << "Circular Queue: ";

        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != front);

        cout << endl;
    }
};

int main() {
    CircularQueue q;
    int choice, value;

    do {
        cout << "\n--- CIRCULAR QUEUE USING LINKED LIST ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            cout << "Program terminated.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}

