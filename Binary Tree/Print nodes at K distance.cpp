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

//Print nodes at K distance
void Print(Node *root, int K){
    if(root == NULL){
        return;
    }

    if(K == 0){
        cout << root->data << " ";
    }
    else{
        Print(root->left, K-1);
        Print(root->right, K-1);
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

    int K;
    cout << "Enter the value of K:";
    cin >> K;

    Print(root, K);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(H)


