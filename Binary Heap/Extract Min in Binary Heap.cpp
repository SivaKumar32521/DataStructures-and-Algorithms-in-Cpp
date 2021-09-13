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

    //Extract Min
    int ExtractMin(){
        if(size == 0){
            return INT_MAX;
        }

        if(size == 1){
            size--;
            return arr[0];
        }

        int MinValue = arr[0];

        swap(arr[0], arr[size-1]);

        size--;

        Heapify(0);

        return MinValue;
    }

    //Print
    void Print(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
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

    h.Print();

    cout << "\n" << h.ExtractMin() << "\n";

    h.Print();
    return 0;
}

//Time Complexity - O(H)
//Auxiliary Space - O(H)

