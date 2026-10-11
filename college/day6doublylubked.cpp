#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyList {
    Node* head;

public:
    DoublyList() {
        head = NULL;
    }

    void insertBeginning(int val) {
        Node* newNode = new Node(val);

        if (head == NULL)
            head = newNode;
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteBeginning() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != NULL)
            head->prev = NULL;

        delete temp;
    }

    void deleteEnd() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        if (temp->prev != NULL)
            temp->prev->next = NULL;
        else
            head = NULL;

        delete temp;
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        cout << "List: ";

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    DoublyList list;
    int choice, value;

    do {
        cout << "\n----- DOUBLY LINKED LIST -----";
        cout << "\n1. Insert at Beginning";
        cout << "\n2. Insert at End";
        cout << "\n3. Delete from Beginning";
        cout << "\n4. Delete from End";
        cout << "\n5. Display";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter element: ";
            cin >> value;
            list.insertBeginning(value);
            break;

        case 2:
            cout << "Enter element: ";
            cin >> value;
            list.insertEnd(value);
            break;

        case 3:
            list.deleteBeginning();
            break;

        case 4:
            list.deleteEnd();
            break;

        case 5:
            list.display();
            break;

        case 6:
            cout << "Program Ended";
            break;

        default:
            cout << "Invalid choice";
        }

    } while (choice != 6);

    return 0;
}