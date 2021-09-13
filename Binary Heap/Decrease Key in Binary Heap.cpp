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

    //Decrease Key
    void DecreaseKey(int i, int val){
        arr[i] = val;

        while(i != 0 && arr[i] < arr[ParentNodeIndex(i)]){
            swap(arr[i], arr[ParentNodeIndex(i)]);
            i = ParentNodeIndex(i);
        }
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

    h.Insert(2);
    h.Insert(3);
    h.Insert(4);
    h.Insert(5);
    h.Insert(6);

    h.Print();

    h.DecreaseKey(4, 1);

    h.Print();

    return 0;
}

//Time Complexity - O(H)
//Auxiliary Space - O(H)


