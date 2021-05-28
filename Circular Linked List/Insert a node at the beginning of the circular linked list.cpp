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

//Insert Beginning
Node* InsertBegin(Node *head, int val){
    Node *temp = new Node(val);

    if(head == NULL){
        temp->next = temp;
        return temp;
    }

    temp->next = head->next;
    head->next = temp;

    int a = head->data;
    head->data = temp->data;
    temp->data = a;

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

    int val;
    cout << "Enter the value to be inserted at the beginning:";
    cin >> val;

    head = InsertBegin(head, val);

    print(head);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)

