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

//Iterative Search an element in a Binary Search Tree
bool Search(Node *root, int key){
    while(root != NULL){
        if(root->data == key){
            return true;
        }
        else if(key < root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return false;
}

//Main
int main(){
    Node *root = new Node(3);
    root->left = new Node(2);
    root->left->left = new Node(1);
    root->right = new Node(4);
    root->right->right = new Node(5);


    int key;
    cout << "Enter the value of key:";
    cin >> key;

    cout << Search(root, key);

    return 0;
}

//Time Complexity - O(H)
//Auxiliary Space - O(1)
