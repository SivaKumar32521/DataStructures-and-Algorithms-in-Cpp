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
Node* DeleteBegining(Node *head){

    if(head == NULL){
        return NULL;
    }

    Node *temp = head->next;

    free(head);

    return temp;
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

    head = DeleteBegining(head);

    printLL(head);

	return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)
