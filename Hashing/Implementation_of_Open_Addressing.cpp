#include <bits/stdc++.h>

using namespace std;

class MyHash{
public:
    int* arr;
    int table_size, size;

    MyHash(int cap){
        table_size = cap;
        size = 0;
        arr = new int[table_size];

        for(int index = 0; index < table_size; index++){
            arr[index] = -1;
        }
    }

    bool Search(int Key){
        int h = Key%table_size;
        int i = h;

        while(arr[i] != -1){
            if(arr[i] == Key){
                return true;
            }
            i = (i+1)%table_size;
            if(i == h){
                return false;
            }
        }
        return false;
    }

    bool Insert(int Key){
        if(size == table_size){
            return false;
        }

        int h = Key%table_size;
        int i = h;

        while(arr[i] != -1 && arr[i] != -2 && arr[i] != Key){
            i = (i+1)%table_size;
        }

        if(arr[i] == Key){
            return false;
        }
        else{
            arr[i] = Key;
            size++;
            return true;
        }
    }

    bool Delete(int Key){
        int h = Key%table_size;
        int i = h;

        while(arr[i] != -1){
            if(arr[i] == Key){
                arr[i] = -2;
                size--;
                return true;
            }
            i = (i+1)%table_size;
            if(i == h){
                return false;
            }
        }
        return false;
    }
};

int main(){
    MyHash T(7);

    cout << T.Insert(30) << "\n";
    cout << T.Insert(12) << "\n";
    cout << T.Insert(25) << "\n";
    cout << T.Search(25) << "\n";
    cout << T.Delete(12) << "\n";
    cout << T.Search(12) << "\n";
    cout << T.Insert(50) << "\n";
    cout << T.Search(100) << "\n";
    cout << T.Delete(10) << "\n";

    return 0;

}
