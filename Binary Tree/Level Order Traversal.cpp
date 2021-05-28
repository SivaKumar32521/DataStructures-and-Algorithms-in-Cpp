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

//Level Order Traversal
void LevelOrderTraversal(Node *root){
    queue<Node*> q;

    q.push(root);

    while(q.empty() == false){
        Node *curr = q.front();

        q.pop();

        cout << curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right != NULL){
            q.push(curr->right);
        }
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

    LevelOrderTraversal(root);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(W)


