#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *prev, *next;
    Node(int val){
        data = val;
        prev = next = NULL;
    }
};

//Insert End
Node* InsertEnd(Node *head, int val){

    Node *temp = new Node(val);

    if(head == NULL){
        return temp;
    }

    Node *curr = head;

    while(curr->next != NULL){
        curr = curr->next;
    }

    curr->next = temp;
    temp->prev = curr;

    return head;
}


//Print
void print(Node *head){
    Node *curr = head;

    while(curr != NULL){
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
    second->prev = head;
    second->next = third;
    third->prev = second;

    int val;
    cout << "Enter the value to be inserted at the End of the doubly linked list:";
    cin >> val;

    head = InsertEnd(head, val);

    print(head);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)

