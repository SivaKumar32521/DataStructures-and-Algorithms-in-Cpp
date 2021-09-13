#include <bits/stdc++.h>

using namespace std;

class DAT{
public:
    int table[1000] = {0};


    void Insert(int i){
        table[i] = 1;
    }

    void Search(int i){
        if(table[i] == 1){
            cout << "Element Present" << "\n";
        }
        else{
            cout << "Element Not Present" << "\n";
        }
    }

    void Delete(int i){
        table[i] = 0;
    }

};

int main(){
    DAT T;

    T.Insert(15);
    T.Insert(20);
    T.Insert(50);
    T.Search(20);
    T.Delete(15);
    T.Search(15);

    return 0;
}
