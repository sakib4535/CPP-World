#include <iostream>

int main() {
    int x = 15, y = 3;
    
    std::cout << "Original values of x and y: " << x << ", " << y << std::endl;
    
    int z = ++x * y; // Increment x by 1 using prefix increment operator, then add y
    
    std::cout << "New value of x: " << x << std::endl;
    std::cout << "Value of y: " << y << std::endl;
    std::cout << "Result of the expression: " << z << std::endl;
    
    return 0;
}
