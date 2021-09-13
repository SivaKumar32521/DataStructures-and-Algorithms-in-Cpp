#include <bits/stdc++.h>

using namespace std;

//Main
int main(){
    int x, y;
    cout << "Enter the value of x and y:";
    cin >> x >> y;

    int res = 1;

    while(y > 0){
        if(y%2 != 0){
            res *= x;
        }
        x *= x;
        y /= 2;
    }

    cout << res;

    return 0;
}

//Time Complexity - O(log y)
//Auxiliary Space - O(1)
