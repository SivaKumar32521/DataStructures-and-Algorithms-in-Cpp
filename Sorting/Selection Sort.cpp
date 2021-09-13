#include <bits/stdc++.h>

using namespace std;

//Selection Sort
void SelectionSort(int arr[], int N){
    for(int i = 0; i < N-1; i++){
        int min_index = i;
        for(int j = i+1; j < N; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
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

    SelectionSort(arr, N);

    Print(arr, N);

    return 0;
}

//Time Complexity - O(N*N)
//Auxiliary Space - O(1)
