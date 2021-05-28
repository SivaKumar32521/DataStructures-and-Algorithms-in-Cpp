
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

//Delete End
Node* DeleteEnd(Node *head){

    if(head == NULL){
        return NULL;
    }

    else if(head->next == NULL){
        delete head;
        return NULL;
    }

    Node *curr = head;

    while(curr->next != NULL){
        curr = curr->next;
    }

    curr->prev->next = NULL;

    delete curr;

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

    head = DeleteEnd(head);

    print(head);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)
