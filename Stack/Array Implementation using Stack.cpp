#include <bits/stdc++.h>

using namespace std;

//Array implementation using Stack
struct MyStack{
    int *arr, cap, top;

    MyStack(int num){
        cap = num;
        arr = new int[cap];
        top = -1;
    }

    void Push(int val){
        if(top == cap-1){
            cout << "Stack Overflow" << endl;
            return;
        }
        else{
            top++;
            arr[top] = val;
        }
    }

    int Pop(){
        if(top == -1){
            return -1;
        }
        else{
            int res = arr[top];
            top--;
            return res;
        }
    }

    int Peek(){
        if(top == -1){
            return -1;
        }
        return arr[top];
    }

    int Size(){
        return (top+1);
    }

    int isEmpty(){
        return (top == -1);
    }
};

//Main
int main(){
    MyStack S(5);

    S.Push(1);
    S.Push(2);
    S.Push(3);

    cout << "Popped element is " << S.Pop() << endl;

    cout << "Peek element is " << S.Peek() << endl;

    cout << "Size of Stack " << S.Size() << endl;

    cout << S.isEmpty() << endl;

    return 0;
}

//Time Complexity - O(1)
//Auxiliary Space - O(1)


