/*use the C++ increment operator ++ to increase the value of a variable by 1. 
To increase the value of x by 1 for the first two steps and by 2 for the last step*/

#include<iostream>

int main() {

    int x = 5;

    x++;  // Increase x by 1  // step 1
    std::cout << "x after first increment: " << x << std::endl;

    x++; // Increase x by 1 again  // step 2
    std::cout << "x after second increment: " << x << std::endl;

    x += 2; // Increase x by 2  / step 3
    std::cout << "x after final increment: " << x << std::endl;
}