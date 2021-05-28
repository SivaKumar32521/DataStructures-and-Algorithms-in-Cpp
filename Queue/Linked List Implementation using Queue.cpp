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

//Linked List Implementation using Queue
struct MyQueue{
    Node *front, *rear;
    int size;

    MyQueue(){
        front = rear = NULL;
        size = 0;
    }

    void Enqueue(int num){
        Node *temp = new Node(num);

        if(front == NULL){
            front = rear = temp;
        }
        else{
            rear->next = temp;
            rear = temp;
        }
        size++;
        return;
    }

    void Dequeue(){
        if(front == NULL){
            return;
        }
        else{
            Node *t = front;
            if(front->next == NULL){
                front = rear = NULL;
                delete t;
            }
            else{
                front = front->next;
                delete t;
            }
            size--;
            return;
        }
    }

    int Size(){
        return size;
    }

    int getFront(){
        return front->data;
    }

    int getRear(){
        return rear->data;
    }
};

//Main
int main(){
    MyQueue Q;

    Q.Enqueue(1);
    Q.Enqueue(2);
    Q.Enqueue(3);

    cout << "Front element is " << Q.getFront() << endl;

    cout << "Rear element is " << Q.getRear() << endl;

    cout << "Size is " << Q.Size() << endl;

    Q.Dequeue();

    cout << "Front element is " << Q.getFront() << endl;

    cout << "Rear element is " << Q.getRear() << endl;

    cout << "Size is " << Q.Size() << endl;

    return 0;
}

//Time Complexity - O(1)
//Auxiliary Space - O(1)
