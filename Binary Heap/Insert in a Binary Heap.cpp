#include <bits/stdc++.h>

using namespace std;

class MinHeap{
public:
    int *arr;
    int size;
    int cap;

    MinHeap(int c){
        arr = new int[c];
        size = 0;
        cap = c;
    }

    int LeftNodeIndex(int i){
        return ((2*i)+1);
    }

    int RightNodeIndex(int i){
        return ((2*i)+2);
    }

    int ParentNodeIndex(int i){
        return ((i-1)/2);
    }

    void Insert(int val){
        if(size < cap){
            arr[size] = val;

            size++;

            int temp = size-1;

            while(temp != 0 && (arr[temp] < arr[ParentNodeIndex(temp)])){
                swap(arr[temp], arr[ParentNodeIndex(temp)]);

                temp = ParentNodeIndex(temp);
            }
        }
    }

    void Print(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
    }

};

//Main
int main(){
    MinHeap h(10);

    h.Insert(3);
    h.Insert(2);
    h.Insert(1);
    h.Insert(4);
    h.Insert(5);

    h.Print();

    return 0;
}

//Time Complexity - O(H)
//Auxiliary Space - O(H)
