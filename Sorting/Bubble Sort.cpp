#include <bits/stdc++.h>

using namespace std;

//Bubble Sort
void BubbleSort(int arr[], int N){
    for(int i = 0; i < N-1; i++){
        bool isSorted = true;

        for(int j = 0; j < N-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSorted = false;
            }
        }

        if(isSorted){
            break;
        }
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

    BubbleSort(arr, N);

    Print(arr, N);

    return 0;
}

//Time Complexity - O(N*N)
//Auxiliary Space - O(1)


