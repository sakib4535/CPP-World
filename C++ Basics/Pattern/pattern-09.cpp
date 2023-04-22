// Number pattern

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i=1; i <= rows; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        for(int k= i+1; k<=rows; k++){
            cout << " ";
        }
        for(int l=1; l<=i; l++){
            cout << l << " ";
        }
        for(int m=i-1; m >=1; m--){
            cout << m<< " ";
        }
        cout << endl;
    }

    return 0;
}