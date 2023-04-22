// Hollow Triangel Star Pattern

#include<iostream>

using namespace std;

int main(){

    int size = 10;
    for(int i=0; i<=size; i++){
        for(int j=0; j<i; j++){
            // not last row

            if (i!=size) { // If this last row is equal to size
                if(j==0 || j==i - 1){ // and column j quals to i -1
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            // last row
            else {
                cout << "*";
            }
        }

        cout << "\n";
    }
    return 0;
}