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

void printList(Node *head){

    if(head == NULL){
        return;
    }
    cout << head->data << " ";
    printList(head->next);
}

int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    head->next = second;
    second->next = third;

    printList(head);

	return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(N)
