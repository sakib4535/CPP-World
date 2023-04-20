// Square Pattern

#include<iostream>
using namespace std;

int main(){
    // size of squares
    int size = 8;

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout << "  *";
        }

        cout << "\n";
    }

    return 0;
}