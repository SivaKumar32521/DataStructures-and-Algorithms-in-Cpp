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
Node* Insert(Node *head, int val){
    Node *temp = new Node(val);

    if(head == NULL){
        return temp;
    }

    else if(val < head->data){
        temp->next = head;
        return temp;
    }

    else{
        Node *curr = head;
        while(curr->next != NULL && curr->next->data < val){
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
        return head;
    }
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

    int val;
    cout << "Enter the element to be inserted:";
    cin >> val;

    head = Insert(head, val);

    printLL(head);

	return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)

