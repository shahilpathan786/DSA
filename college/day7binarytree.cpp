
#include <iostream>
using namespace std;

class BinaryTree {
    int arr[100];
    int size;

public:
    BinaryTree() {
        size = 0;
    }

    void insert(int value) {
        if (size == 100) {
            cout << "Tree is full\n";
            return;
        }

        arr[size] = value;
        size++;
    }

    void display() {
        cout << "Binary Tree (Array): ";

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    void showChildren(int i) {
        if (i < 0 || i >= size) {
            cout << "Invalid index\n";
            return;
        }

        cout << "Node: " << arr[i] << endl;

        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < size)
            cout << "Left child: " << arr[left] << endl;
        else
            cout << "No left child\n";

        if (right < size)
            cout << "Right child: " << arr[right] << endl;
        else
            cout << "No right child\n";
    }
};

int main() {
    BinaryTree tree;

    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);
    tree.insert(60);
    tree.insert(70);

    tree.display();

    tree.showChildren(0);

    return 0;
}