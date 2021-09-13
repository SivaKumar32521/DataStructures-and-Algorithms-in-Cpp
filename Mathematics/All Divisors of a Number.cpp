#include <bits/stdc++.h>

using namespace std;

//Divisors
void Divisors(int N){
    int i;

    for(i = 1; i*i < N; i++){
        if(N%i == 0){
            cout << i << " ";
        }
    }

    i--;

    for(i; i >= 1; i--){
        if(N%i == 0){
            cout << (N/i) << " ";
        }
    }

}

//Main
int main(){
    int N;
    cout << "Enter the value of N:";
    cin >> N;
    Divisors(N);
    return 0;
}

//Time Complexity - O(sqrt(N))
//Auxiliary Space - O(1)
