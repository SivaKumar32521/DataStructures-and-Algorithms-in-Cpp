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

//Linked List Implementation using Stack
struct MyStack{
    Node *head;
    int size;
    MyStack(){
        head = NULL;
        size = 0;
    }

    void Push(int num){

        Node *temp = new Node(num);

        temp->next = head;
        head = temp;
        size++;

        return;
    }

    int Pop(){

        if(head == NULL){
            cout << "Stack Underflow" << endl;
            return -1;
        }

        int res = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;

        return res;
    }

    int Peek(){
        if(head == NULL){
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return head->data;
    }

    int Size(){
        return size;
    }

    bool isEmpty(){
        return (head==NULL);
    }

};

//Main
int main(){
    MyStack S;

    S.Push(1);
    S.Push(2);
    S.Push(3);

    cout << "Peek element is " << S.Peek() << endl;

    cout << "Popped element is " << S.Pop() << endl;

    cout << "Size of Stack " << S.Size() << endl;

    cout << S.isEmpty() << endl;

    return 0;
}

//Time Complexity - O(1)
//Auxiliary Space - O(1)


