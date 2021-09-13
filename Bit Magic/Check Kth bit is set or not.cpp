#include <bits/stdc++.h>

using namespace std;

//Main
int main(){

    int N, K;
    cout << "Enter the value of N and K:";
    cin >> N >> K;
    if(((N >> (K-1))&1) == 1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}

//Time Complexity - O(1)
//Auxiliary Space - O(1)
