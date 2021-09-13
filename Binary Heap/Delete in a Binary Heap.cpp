
#include <bits/stdc++.h>

using namespace std;

//MinHeap
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

    //Insert
    void Insert(int val){
        if(size < cap){
            arr[size] = val;

            size++;
        }
    }

    //Heapify
    void Heapify(int i){
        int smallest = i;

        if(arr[LeftNodeIndex(i)] < arr[i] && LeftNodeIndex(i) < size){
            smallest = LeftNodeIndex(i);
        }

        if(arr[RightNodeIndex(i)] < arr[smallest] && RightNodeIndex(i) < size){
            smallest = RightNodeIndex(i);
        }

        if(smallest != i){
            swap(arr[i], arr[smallest]);
            Heapify(smallest);
        }
    }

    void Delete(int i){
        swap(arr[i], arr[size-1]);

        size--;

        Heapify(i);
    }

    //Print
    void Print(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

};

//Main
int main(){
    MinHeap h(10);

    h.Insert(1);
    h.Insert(2);
    h.Insert(3);
    h.Insert(4);
    h.Insert(5);
    h.Insert(6);
    h.Insert(7);
    h.Insert(8);
    h.Insert(9);
    h.Insert(10);

    h.Print();

    h.Delete(4);

    h.Print();

    return 0;
}

//Time Complexity - O(H)
//Auxiliary Space - O(H)
