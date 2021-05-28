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

//Delete
Node* DeleteEnd(Node *head){

    if(head == NULL){
        return NULL;
    }

    else if(head->next == NULL){
        free(head);
        return NULL;
    }

    Node *curr = head;
    while(curr->next->next != NULL){
        curr = curr->next;
    }

    free(curr->next);

    curr->next = NULL;

    return head;
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
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next = second;
    second->next = third;

    head = DeleteEnd(head);

    printLL(head);

	return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)

