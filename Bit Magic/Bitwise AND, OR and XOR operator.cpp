#include <bits/stdc++.h>

using namespace std;

//Main
int main(){

    int x, y;
    cout << "Enter the value of x and y:";
    cin >> x >> y;

    cout << "Bitwise AND of " << x << " and " << y << " is :" << (x&y) << "\n";
    cout << "Bitwise OR of " << x << " and " << y << " is :" << (x|y) << "\n";
    cout << "Bitwise XOR of " << x << " and " << y << " is :" << (x^y) << "\n";

    cout << "Left Shift of " << x << " << " << y << " is :" << (x << y) << "\n"; // (x << y) equivalent to (x*pow(2,y))
    cout << "Right Shift of " << x << " >> " << y << " is :" << (x >> y) << "\n"; // (x >> y) equivalent to (x/pow(2, y))
    cout << "Not of " << x << " is :" << (unsigned int) (~x) << "\n";

    return 0;
}

//Time Complexity - O(1)
//Auxiliary Space - O(1)

