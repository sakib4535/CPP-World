#include <iosstream>

using namespace std;

int main() {
    int n = 5; // rows numbers
    int space = n - 1; // number of spaces in first row
    int stars = 1; // numbe rof stars in the first row

    // upper triangle
    for(int i=0; i<n; i++){
        for(int j=0; j < space; j++){
            cout << " ";
        }

        for(int j=0; j < size; j++){
            cout << "*";
        }
        cout << endl;
        space--;
        stars += 2;
    }  
}