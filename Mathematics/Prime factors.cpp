#include <bits/stdc++.h>

using namespace std;

//Prime Factors
void PrimeFactors(int N){
    int product = 1;

    for(int i = 2; i <= N; i++){
        while(N%i == 0){
            cout << i << " ";
            product *= i;
            N /= i;
        }
        if(N == 1){
            break;
        }
    }

    cout << "\n" << product;
}

//Main
int main(){
    int N;
    cout << "Enter the value of N:";
    cin >> N;
    PrimeFactors(N);
    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(1)
