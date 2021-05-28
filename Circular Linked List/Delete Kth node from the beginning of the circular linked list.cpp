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

//Delete Kth Node
Node* DeleteKthNode(Node *head, int K){

    Node *temp;

    if(head == NULL){
        return NULL;
    }

    else if(K == 1 && head->next == head){
        delete head;
        return NULL;
    }

    else if(K == 1){

        head->data = head->next->data;

        temp = head->next;

        head->next = head->next->next;

        delete temp;

        return head;
    }

    else{
        Node *curr = head;

        for(int i = 2; i < K; i++){
            curr = curr->next;
        }

        temp = curr->next;

        curr->next = curr->next->next;

        delete temp;

        return head;
    }
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

    int K;
    cout << "Enter the position of the node to be deleted:";
    cin >> K;

    head = DeleteKthNode(head, K);

    print(head);

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)


