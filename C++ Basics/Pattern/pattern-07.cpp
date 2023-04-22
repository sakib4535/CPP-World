// Pyramid Pattern

#include<iostream>

using namespace std;

int main() {

    int size = 10;

    for(int i=0; i<size; i++){
        for(int j=0; j < size - i - 1; j++){
            cout << " "; // we should give one space 
        }

        // Printing Stars
        for (int k=0; k < 2 * i + 1; k++){
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}