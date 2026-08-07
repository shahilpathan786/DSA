#include <iostream>
using namespace std;
#include <vector>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node (int val){
        data = val;
        left = right = NULL;

    }

};

static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
     
}

// preOreder
void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << "";
    preOrder(root->left);
    preOrder(root->right);
}

// inorder 

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<< root->data << " ";
    inorder(root->right);
}

// postOrder

void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " "; 
}


int main(){
    vector <int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);
    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;
    preOrder(root);
    inorder(root);
    return 0;
}