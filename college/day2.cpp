// 1.stack using array
// 2.queue using array
// 3.circular queue using array

#include <iostream>
using namespace std;


class Stack {
    int *arr;
    int top;
    int size;

public:
    Stack(int n) {
        size = n;
        arr = new int[size];
        top = -1;
    }

    void push(int x) {
        if (top == size - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << "Popped: " << arr[top--] << endl;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack Empty\n";
            return;
        }
        cout << "Top Element: " << arr[top] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack Empty\n";
            return;
        }

        cout << "Stack: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};


class Queue {
    int *arr;
    int front, rear;
    int size;

public:
    Queue(int n) {
        size = n;
        arr = new int[size];
        front = 0;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear == size - 1) {
            cout << "Queue Overflow\n";
            return;
        }

        arr[++rear] = x;
    }

    void dequeue() {
        if (front > rear) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Deleted: " << arr[front++] << endl;
    }

    void peek() {
        if (front > rear) {
            cout << "Queue Empty\n";
            return;
        }

        cout << "Front Element: " << arr[front] << endl;
    }

    void display() {
        if (front > rear) {
            cout << "Queue Empty\n";
            return;
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};


class CircularQueue {

    int *arr;
    int front, rear;
    int size;

public:

    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {

        if ((rear + 1) % size == front) {
            cout << "Circular Queue Overflow\n";
            return;
        }

        if (front == -1)
            front = rear = 0;
        else
            rear = (rear + 1) % size;

        arr[rear] = x;
    }

    void dequeue() {

        if (front == -1) {
            cout << "Circular Queue Underflow\n";
            return;
        }

        cout << "Deleted: " << arr[front] << endl;

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % size;
    }

    void peek() {

        if (front == -1) {
            cout << "Circular Queue Empty\n";
            return;
        }

        cout << "Front Element: " << arr[front] << endl;
    }

    void display() {

        if (front == -1) {
            cout << "Circular Queue Empty\n";
            return;
        }

        cout << "Circular Queue: ";

        int i = front;

        while (true) {

            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % size;
        }

        cout << endl;
    }
};



int main() {

    int n;

    cout << "Enter Size of Array: ";
    cin >> n;

    Stack st(n);
    Queue q(n);
    CircularQueue cq(n);

    int choice;

    while (true) {

        cout << "\n========= MAIN MENU =========\n";
        cout << "1. Stack\n";
        cout << "2. Queue\n";
        cout << "3. Circular Queue\n";
        cout << "4. Exit\n";

        cin >> choice;

        if (choice == 4)
            break;

        int op, x;

        switch (choice) {

        case 1:

            do {
                cout << "\n--- STACK MENU ---\n";
                cout << "1.Push\n2.Pop\n3.Peek\n4.Display\n5.Back\n";
                cin >> op;

                switch (op) {

                case 1:
                    cout << "Enter Value: ";
                    cin >> x;
                    st.push(x);
                    break;

                case 2:
                    st.pop();
                    break;

                case 3:
                    st.peek();
                    break;

                case 4:
                    st.display();
                    break;

                }

            } while (op != 5);

            break;

        case 2:

            do {

                cout << "\n--- QUEUE MENU ---\n";
                cout << "1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Back\n";
                cin >> op;

                switch (op) {

                case 1:
                    cout << "Enter Value: ";
                    cin >> x;
                    q.enqueue(x);
                    break;

                case 2:
                    q.dequeue();
                    break;

                case 3:
                    q.peek();
                    break;

                case 4:
                    q.display();
                    break;

                }

            } while (op != 5);

            break;

        case 3:

            do {

                cout << "\n--- CIRCULAR QUEUE MENU ---\n";
                cout << "1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Back\n";
                cin >> op;

                switch (op) {

                case 1:
                    cout << "Enter Value: ";
                    cin >> x;
                    cq.enqueue(x);
                    break;

                case 2:
                    cq.dequeue();
                    break;

                case 3:
                    cq.peek();
                    break;

                case 4:
                    cq.display();
                    break;

                }

            } while (op != 5);

            break;

        default:
            cout << "Invalid Choice\n";
        }
    }

    return 0;
}