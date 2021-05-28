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

Node* InsertBegining(Node *head, int val){
    Node *temp = new Node(val);

    if(head == NULL){
        return temp;
    }

    else{
        temp->next = head;
        return temp;
    }
}

void printLL(Node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next = second;
    second->next = third;

    int val;
    cout << "Enter the element to be inserted at the begining:";
    cin >> val;

    head = InsertBegining(head, val);

    printLL(head);

	return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)
