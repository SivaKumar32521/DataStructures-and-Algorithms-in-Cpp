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

//Insert
Node* Insert(Node *head, int val, int pos){
    Node *temp = new Node(val);

    if(pos == 1){
        temp->next = head;
        return temp;
    }

    Node *curr = head;


    for(int i = 2; i < pos && curr != NULL; i++){
        curr = curr->next;
    }

    if(curr == NULL){
        return head;
    }

    temp->next = curr->next;
    curr->next = temp;

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
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;

    int val, pos;
    cout << "Enter the value to be inserted and at which position to be inserted:";
    cin >> val >> pos;

    head = Insert(head, val, pos);

    printLL(head);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)
