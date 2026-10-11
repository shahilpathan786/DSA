#include <iostream>
using namespace std;
#include <vector>
#include <queue>


class Node{
public:
    int data;
    Node* right;
    Node* left;

    Node(int val){
        data = val;
        right = left = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector <int> preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    } 
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->left = buildTree(preorder);

    return root;
}

// prorder traverse

Node* preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);

}

// inorder traverse

Node* inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<< root->data << endl;
    inorder(root->right);
}

// postorder

Node* postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<< root->data << endl;
}

Node* levelorder(Node* root){
    queue<Node*> p;
    p.push(root);
    while(p.size() > 0){
        Node* curr = p.front();
        p.pop();
        cout<< curr->data << endl;
        if(curr->left != NULL){
            p.push(curr->left);
        } else if(curr->right != NULL){
            p.push(curr->right);
        }
        
    };

// leetcode question 102 
// traversing the tree in level wise order;

vector<vector<int>> levelwise(Node* root){
    vector<vector<<int> ans;
    if(root == NULL){
        return ans;
    }
    queue<Node*> q;
    while(!q.empty()){
        vector<int> level;
        int size = q.size();
        for(int i = 0 ; i < size ; i++){
            Node* curr = q.front();
            q.pop();
            if(curr->left!= NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
            level.push_back(curr->val);

        }
        ans.push_back(level);
    }

    return ans; 

};


};



