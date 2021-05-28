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

//Iterative PreOrder Traversal
void PreorderTraversal(Node *root){
    stack<Node*> st;

    Node *curr = root;

    while(curr != NULL || st.empty() == false){
        while(curr != NULL){
            cout << curr->data << " ";
            if(curr->right != NULL){
                st.push(curr->right);
            }
            curr = curr->left;
        }
        if(st.empty() == false){
            curr = st.top();
            st.pop();
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

    PreorderTraversal(root);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(H)



