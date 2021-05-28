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

//Middle
void getMiddle(Node *head){

    Node *slow = head, *fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->data;
}

//Main
int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;

    getMiddle(head);

	return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)

