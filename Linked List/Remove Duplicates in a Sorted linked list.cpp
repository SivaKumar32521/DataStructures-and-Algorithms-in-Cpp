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

//Remove Duplicates
Node* RemoveDuplicates(Node *head){
    if(head == NULL){
        return NULL;
    }

    Node *curr = head->next, *prev = head;

    while(curr != NULL){
        if(curr->data != prev->data){
            prev = curr;
            curr = curr->next;
        }
        else{
            Node *temp = curr;
            curr = curr->next;
            prev->next = curr;
            delete temp;
        }
    }
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
    Node *second = new Node(1);
    Node *third = new Node(2);
    Node *fourth = new Node(2);

    head->next = second;
    second->next = third;
    third->next = fourth;


    head = RemoveDuplicates(head);

    printLL(head);

    return 0;
}

