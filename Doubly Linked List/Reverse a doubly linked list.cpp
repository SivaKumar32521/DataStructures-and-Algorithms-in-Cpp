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

//Reverse
Node* Reverse(Node *head){

    if(head == NULL || head->next == NULL){
        return head;
    }

    Node *curr = head, *Prev = NULL, *Next;

    while(curr != NULL){
        Next = curr->next;

        curr->next = Prev;

        curr->prev = Next;

        Prev = curr;

        curr = Next;
    }
    return Prev;
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

    head = Reverse(head);

    print(head);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)
