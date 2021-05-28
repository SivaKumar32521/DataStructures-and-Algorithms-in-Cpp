#include <bits/stdc++.h>

using namespace std;

//Circular Array Implementation using DeQueue
struct MyDeQueue{
    int *arr, size, front, cap;

    MyDeQueue(int num){
        cap = num;
        arr = new int[cap];
        size = front = 0;
    }

    bool isFull(){
        return (size == cap);
    }

    bool isEmpty(){
        return (size == 0);
    }

    void InsertRear(int val){
        if(isFull()){
            return;
        }
        int rear = (front+size)%cap;
        arr[rear] = val;
        size++;
    }

    void InsertFront(int val){
        if(isFull()){
            return;
        }
        front = (front-1+cap)%cap;
        arr[front] = val;
        size++;
    }

    void DeleteFront(){
        if(isEmpty()){
            return;
        }
        front = (front+1)%cap;
        size--;
    }

    void DeleteRear(){
        if(isEmpty()){
            return;
        }
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
        else{
            return arr[(front+size-1)%cap];
        }
    }

};

//Main
int main(){
    MyDeQueue Q(5);

    Q.InsertFront(1);
    Q.InsertFront(2);
    Q.InsertRear(3);

    cout << "Front element is " << Q.getFront() << endl;

    cout << "Rear element is " << Q.getRear() << endl;

    Q.DeleteFront();

    cout << "Front element is " << Q.getFront() << endl;

    cout << "Rear element is " << Q.getRear() << endl;

    Q.DeleteRear();

    cout << "Front element is " << Q.getFront() << endl;

    cout << "Rear element is " << Q.getRear() << endl;

    Q.InsertRear(4);

    cout << "Front element is " << Q.getFront() << endl;

    cout << "Rear element is " << Q.getRear() << endl;

    Q.InsertFront(5);

    cout << "Front element is " << Q.getFront() << endl;

    cout << "Rear element is " << Q.getRear() << endl;


    return 0;
}

//Time Complexity - O(1)
//Auxiliary Space - O(1)


