#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    /*static_cast is a C++ typecasting operator that allows you to perform explicit type conversions 
    between compatible types. 
    It is one of the four C++ typecasting operators, along with dynamic_cast, reinterpret_cast,
     and const_cast.*/
    int sum = num1 + num2;
    int product = num1 * num2;
    int difference = num1 - num2;
    float quotient = static_cast<float>(num1) / num2;  // It is expression so it works like: static_cast<type>(expression)

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    // std::endl is a standard C++ stream manipulator that inserts a newline character (\n) into the output stream and flushes the buffer. 
    // It is equivalent to writing "\n" and then calling std::flush() on the output stream.

    return 0;
}
