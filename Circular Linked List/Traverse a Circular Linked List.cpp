#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

//Traverse
void Traverse(Node *head){

    if(head == NULL){
        return;
    }

    cout << head->data << " ";

    Node *curr = head->next;

    while(curr != head){
        cout << curr->data << " ";
        curr = curr->next;
    }
}

//Main
int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    head->next = second;
    second->next = third;
    third->next = head;

    Traverse(head);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)

