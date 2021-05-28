
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

//Reverse
Node* Reverse(Node *head){
    Node *Next, *prev = NULL, *curr = head;

    while(curr != NULL){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}

//Print
void printLL(Node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

//Main
int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;

    head = Reverse(head);

    printLL(head);

    return 0;
}
