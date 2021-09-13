#include <bits/stdc++.h>

using namespace std;

long long int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n-1);
}

//Main
int main(){
    int n, r;
    cout << "Enter the value of n and r:";
    cin >> n >> r;

    cout << "Number of permutation is " << fact(n)/fact(n-r) << "\n";

    cout << "Number of combination is " << fact(n)/(fact(n-r) * fact(r)) << "\n";

    return 0;
}

//Time Complexity - O(N)
//Auxiliary Space - O(N)
