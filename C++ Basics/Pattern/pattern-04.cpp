//Right Tringle 
#include <iostream>
using namespace std;

int main() {
    int size = 8;

    for(int i=0; i<size; i++){
        for(int j=1; j < size - i; j++){
            cout << " ";
        }

        for(int k=0; k<=i; k++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
 
}