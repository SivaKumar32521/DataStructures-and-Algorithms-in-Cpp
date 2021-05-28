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

int Search(Node *head, int val){
    int pos = 1;
    Node *curr = head;
    while(curr != NULL){
        if(curr->data == val){
            return pos;
        }
        else{
            curr = curr->next;
            pos += 1;
        }
    }
    return -1;
}

int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    head->next = second;
    second->next = third;

    int val;
    cout << "Enter the element to be searched in the linked list:";
    cin >> val;

    int i = Search(head, val);

    if(i > 0){
        cout << "Element found at position " << i;
    }
    else{
        cout << "Element not found";
    }

	return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)
