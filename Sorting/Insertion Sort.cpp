#include <bits/stdc++.h>

using namespace std;

//Insertion Sort
void InsertionSort(int arr[], int N){
    for(int i = 1; i < N; i++){
        int key = arr[i], j = i-1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

//Print
void Print(int arr[], int N){
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
}

//Main
int main(){

    int N;
    cout << "Enter the value of N:";
    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    InsertionSort(arr, N);

    Print(arr, N);

    return 0;
}

//Time Complexity - O(N*N)
//Auxiliary Space - O(1)


