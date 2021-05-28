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
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }

    temp->next = head;
    temp->prev = head->prev;
    head->prev->next = temp;
    head->prev = temp;

    return head;
}


//Print
void print(Node *head){

    if(head == NULL){
        return;
    }
    cout << head->data <<  " ";

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
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = head;
    head->prev = third;

    int val;
    cout << "Enter the value to be inserted at the beginning of the circular doubly linked list:";
    cin >> val;

    head = InsertEnd(head, val);

    print(head);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)

