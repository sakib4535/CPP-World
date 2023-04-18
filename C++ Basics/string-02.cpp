#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cout << "Please Enter a line of text: ";
    std::getline(std::cin, input);

    std::cout << "You Entered: " << input << std::endl;

    return 0;
}