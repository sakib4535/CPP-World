#include <iostream>

int main(){
    int x, y;
    int sum;
    std::cout << "Type a number: ";
    std::cin >> x;
    std::cout << "Type another number: ";
    std::cin >> y;
    sum = x + y;
    std::cout << "Sum is: " << sum;
}