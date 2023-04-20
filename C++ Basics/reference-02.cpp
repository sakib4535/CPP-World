#include <iostream>

using namespace std;

void multiply(int &x, int&y, int &result){
    result = x * y;
}

int main() {
    int num1 = 10, num2 = 31, product;

    multiply(num1, num2, product);

    cout << "The product of " << num1 << " And " << num2 << "is" << product;

    int &ref1 = num1;
    int &ref2 = num2;
    int &ref3 = product;

    ref1 += 5;
    ref2 *= 4;
    ref3 /= 2;

    cout << "After some math operation; \n";
    cout << "num1 =  " << num1 << ", num2= " << num2 << "product= " << product;

    return 0;
}