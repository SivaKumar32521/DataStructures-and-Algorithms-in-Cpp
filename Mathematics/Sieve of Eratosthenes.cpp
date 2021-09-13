#include <bits/stdc++.h>

using namespace std;

//Main
int main(){
    int N;
    cout << "Enter the value of N:";
    cin >> N;

    vector<bool> v(N+1, true);

    for(int i = 2; i <= N; i++){
        if(v[i]){
            for(int j = i*i; j <= N; j += i){
                v[j] = false;
            }
        }
    }

    for(int k = 2; k <= N; k++){
        if(v[k]){
            cout << k << " ";
        }
    }

    return 0;
}

//Time Complexity - O(N log log(N))
//Auxiliary Space - O(N)
