#include<iostream>
using namespace std;
int main(){
    int size = 5;

    for(int i=0; i<size; i++){
        for(int j=0; j<size - i; j++){  // It will print 5 times for firts row, then it wll go second row with 4 
            cout << "";  // If I make one single space, pattern output will change diagonally
        }
        for(int j=size; j>i; j--){   // 5,4,3,2,1 from the first row as reversing
            cout << " *";  // each of the asterisk maintain single space distacne
        }
        cout << "\n";
    }

    return 0;
}