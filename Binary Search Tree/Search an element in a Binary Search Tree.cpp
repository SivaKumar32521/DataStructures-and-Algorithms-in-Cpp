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

//Search an element in a Binary Search Tree
bool Search(Node *root, int key){
    if(root == NULL){
        return false;
    }
    else if(root->data == key){
        return true;
    }
    else if(key < root->data){
        return Search(root->left, key);
    }
    else{
        return Search(root->right, key);
    }
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
//Auxiliary Space - O(H)



