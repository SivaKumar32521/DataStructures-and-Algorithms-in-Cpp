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

//Floor of a value in a Binary Search Tree
Node* FloorOfValueInBST(Node *root, int key){
    Node *res = NULL;

    while(root != NULL){
        if(root->data == key){
            return root;
        }

        else if(key < root->data){
            root = root->left;
        }

        else{
            res = root;
            root = root->right;
        }
    }
    return res;
}

//Main
int main(){
    Node *root = new Node(5);
    root->left = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right = new Node(6);
    root->right->right = new Node(10);
    root->right->right->left = new Node(7);


    int key;
    cout << "Enter the value of key:";
    cin >> key;

    Node *res = FloorOfValueInBST(root, key);

    cout << res->data;

    return 0;
}

//Time Complexity - O(H)
//Auxiliary Space - O(1)
