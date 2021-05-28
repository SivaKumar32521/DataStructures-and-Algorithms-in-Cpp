#include <bits/stdc++.h>

using namespace std;

//Circular Array Implementation using Queue
struct MyQueue{
    int *arr, front, size, cap;

    MyQueue(int num){
        cap = num;
        arr = new int[cap];
        front = size = 0;
    }

    bool isEmpty(){
        return (size == 0);
    }

    bool isFull(){
        return (size == cap);
    }

    int getrear(){
        if(isEmpty()){
            return -1;
        }
        return (front+size-1)%cap;
    }

    void Enqueue(int val){
        if(isFull()){
            return;
        }
        int rear = getrear();
        rear = (rear+1)%cap;
        arr[rear] = val;
        size++;
    }

    void Dequeue(){
        if(isEmpty()){
            return;
        }
        front = (front+1)%cap;
        size--;
    }

    int getFront(){
        if(isEmpty()){
            return INT_MIN;
        }
        return arr[front];
    }

    int getRear(){
        if(isEmpty()){
            return INT_MIN;
        }
        return arr[getrear()];
    }
};

//Main
int main(){
    MyQueue Q(3);

    Q.Enqueue(1);
    Q.Enqueue(2);
    Q.Enqueue(3);

    cout << "Front element is " << Q.getFront() << endl;

    cout << "Rear element is " << Q.getRear() << endl;

    Q.Dequeue();

    cout << "Front element is " << Q.getFront() << endl;

    cout << "Rear element is " << Q.getRear() << endl;

    Q.Enqueue(4);

    cout << "Front element is " << Q.getFront() << endl;

    cout << "Rear element is " << Q.getRear() << endl;

    return 0;
}

//Time Complexity - O(1)
//Auxiliary Space - O(1)


