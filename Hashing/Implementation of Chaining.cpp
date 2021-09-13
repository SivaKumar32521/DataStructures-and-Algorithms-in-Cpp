#include <bits/stdc++.h>

using namespace std;

//MyHash
class MyHash{
public:
    int table_size;
    list<int> *table;

    MyHash(int cap){
        table_size = cap;
        table = new list<int> [cap];
    }

    //Insert
    void Insert(int Key){
        int i = Key%table_size;

        table[i].push_back(Key);
    }

    //Search
    bool Search(int Key){
        int i = Key%table_size;

        for(auto val : table[i]){
            if(val == Key){
                return true;
            }
        }
        return false;
    }

    //Delete
    void Delete(int Key){
        int i = Key%table_size;

        table[i].remove(Key);
    }
};

//Main
int main(){
    MyHash T(5);

    T.Insert(15);
    T.Insert(36);
    T.Insert(58);
    cout << T.Search(15) << "\n";
    T.Insert(50);
    cout << T.Search(50) << "\n";
    T.Delete(15);
    cout << T.Search(15) << "\n";
    cout << T.Search(50) << "\n";

    return 0;
}

//Time Complexity - O(1) on average
//Auxiliary Space - O(N)
