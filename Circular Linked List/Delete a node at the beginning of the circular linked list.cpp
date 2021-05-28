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

//Delete Beginning
Node* DeleteBegin(Node *head){

    if(head == NULL){
        return NULL;
    }

    else if(head->next == head){
        delete head;
        return NULL;
    }

    head->data = head->next->data;

    Node *temp = head->next;

    head->next = head->next->next;

    delete temp;

    return head;
}

//Print
void print(Node *head){
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

    head = DeleteBegin(head);

    print(head);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)

