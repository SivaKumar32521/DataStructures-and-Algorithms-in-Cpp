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

//Height of a binary tree
int Height(Node *root){
    if(root == NULL){
        return 0;
    }
    else{
        return max(Height(root->left), Height(root->right))+1;
    }
}

//Main
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(6);
    root->left->right = new Node(7);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);

    cout << Height(root);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(H)


