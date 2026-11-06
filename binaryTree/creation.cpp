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
// void preOrder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     cout << root->data << "";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// inorder 

// void inorder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     inorder(root->left);
//     cout<< root->data << " ";
//     inorder(root->right);
// }

// postOrder
// void postOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout << root->data << " "; 
// }

// int depth(Node* root){
//     if(root == NULL){
//         return -1;

//     }

//     int leftdep = depth(root->left);
//     int rightdep = depth(root->right);

//     return max(leftdep , rightdep) + 1;
// }

// int diameterofnode(Node* root){
//     if(root == NULL){
//         return 0;
//     }

//     int diameterleft = diameterofnode(root->left);
//     int diameterright = diameterofnode(root->right);
//     int add = depth(root->left) + depth(root->right);

//     return max(diameterleft , diameterright , add);
// }

// second way od doing diameter probelm

int ans = 0;

int diameter(Node* root){
    if(root == NULL){
        return 0;
    }
    int lefth = diameter(root->left);
    int righth = diameter(root ->right);
    ans = max(ans , lefth + righth);

    return max(lefth , righth) + 1;


}

int duamee(Node* root){
    diameter(root);

    return ans;
}

// this is the end of the diameter question;




int main(){
    vector <int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);
    cout<<duamee(root) << endl;
    return 0;
}