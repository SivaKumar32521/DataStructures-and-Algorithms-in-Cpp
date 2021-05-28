#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

//Insert in a Binary Search Tree
Node *Insert(Node *root, int X){
    if(root == NULL){
        return new Node(X);
    }
    else if(X < root->data){
        root->left = Insert(root->left, X);
    }
    else if(X > root->data){
        root->right = Insert(root->right, X);
    }

    return root;
}

//Print values using Inorder Traversal
void Inorder(Node *root){
    if(root != NULL){
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}

//Main
int main(){
    Node *root = new Node(5);
    root->left = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right = new Node(6);
    root->right->right = new Node(8);
    root->right->right->left = new Node(7);


    int key;
    cout << "Enter the value of key:";
    cin >> key;

    root = Insert(root, key);

    Inorder(root);

    return 0;
}

//Time Complexity - O(H)
//Auxiliary Space - O(H)
