#include <iostream>

int main(){
    int x;
    std::cout << "Type a Number: ";
    std::cin >> x;
    std::cout << "You entered " << x << "\n";

    // To read a value from the console and store it in the variable z, you should use std::cin >> z;
    int z = x * x; 
    std::cout << "Product of x is: " << z << " Value That You provided";
    std::cin >> z;
    return 0;
}
