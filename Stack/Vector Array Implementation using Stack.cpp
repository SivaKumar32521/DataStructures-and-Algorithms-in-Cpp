#include <bits/stdc++.h>

using namespace std;

//Vector Array implementation using Stack
struct MyStack{
    vector<int> v;

    void Push(int val){
        v.push_back(val);
    }

    int Pop(){
        int res = v.back();
        v.pop_back();
        return res;
    }

    int Peek(){
        return v.back();
    }

    int Size(){
        return v.size();
    }

    int isEmpty(){
        return v.empty();
    }
};

//Main
int main(){
    MyStack S;

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



