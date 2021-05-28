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

//To find a nearest greater value of the root node
Node *Successor(Node *curr){
    curr = curr->right;

    while(curr != NULL && curr->left != NULL){
        curr = curr->left;
    }

    return curr;
}

//Delete in a Binary Search Tree
Node *Delete(Node *root, int key){
    if(root == NULL){
        return root;
    }

    else if(key < root->data){
        root->left = Delete(root->left, key);
    }

    else if(key > root->data){
        root->right = Delete(root->right, key);
    }

    else{
        if(root->left == NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }

        else if(root->right == NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }

        else{
            Node *succ = Successor(root);
            root->data = succ->data;
            root->right = Delete(root->right, succ->data);
        }
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

    root = Delete(root, key);

    Inorder(root);

    return 0;
}

//Time Complexity - O(H)
//Auxiliary Space - O(H)

