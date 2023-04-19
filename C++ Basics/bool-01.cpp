#include <iostream>
using namespace std;

int main(){
    int n;
    bool isPowerof2 = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    if(n==1){
        isPowerof2 = true;
    } else if(n % 2 == 1){
        isPowerof2 = false;
    } else {
        while (n > 1) {
            n /= 2;
            if (n % 2 == 1) {
                isPowerof2 = false;
                break;
            }
        }
    }

    if(isPowerof2) {
        cout << " is a pwoer of 2" << endl;
    } else {
        cout << n << " is not a power of 2" << endl;
    }

    return 0;

}