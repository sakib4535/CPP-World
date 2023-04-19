# include<iostream>
# include<cmath>

using namespace std;

int main() {
    int x = 11;
    bool is_prime = true;

    for(int i=2; i < sqrt(x); i++){
        if(x % i == 0){
            is_prime = false;
            break;
        }
    }

    if(is_prime){
        cout << x << " This is a prime number" << endl;
    } else {
        cout << x << " is not a prime number" << endl;
    }

    return 0;
}