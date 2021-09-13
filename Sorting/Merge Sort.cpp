#include <bits/stdc++.h>

using namespace std;

//Merge
void Merge(int arr[], int l, int mid, int r){

    int size1 = mid-l+1, size2 = r-mid;

    int arr1[size1], arr2[size2];

    for(int i = 0; i < size1; i++){
        arr1[i] = arr[l+i];
    }

    for(int j = 0; j < size2; j++){
        arr2[j] = arr[mid+1+j];
    }

    int i1 = 0, i2 = 0, index = l;

    while((i1 < size1) && (i2 < size2)){
        if(arr1[i1] <= arr2[i2]){
            arr[index++] = arr1[i1];
            i1++;
        }
        else{
            arr[index++] = arr2[i2];
            i2++;
        }
    }

    while(i1 < size1){
        arr[index++] = arr1[i1];
        i1++;
    }

    while(i2 < size2){
        arr[index++] = arr2[i2];
        i2++;
    }
}

//Merge Sort
void MergeSort(int arr[], int l, int r){

    if(r > l){

        int mid = (l+r)/2;

        MergeSort(arr, l, mid);

        MergeSort(arr, mid+1, r);

        Merge(arr, l, mid, r);
    }
}

//Print
void PrintArray(int arr[], int N){
    for(int j = 0; j < N; j++){
        cout << arr[j] << " ";
    }
}

//Main
int main(){

    int N;

    cout << "Enter the value of N:";

    cin >> N;

    int arr[N];

    cout << "Enter the input values in the array:";

    //Input
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    MergeSort(arr, 0, N-1);

    PrintArray(arr, N);

    return 0;
}

//Time Complexity - O(N log(N))
//Auxiliary Space - O(N)


