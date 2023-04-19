#include <iostream>
using namespace std;

void PuzzleSolver(int num1, int num2, int num3){
    if(num1 + num2 == num3){
        cout << num1 << '+' << num2 << '=' << num3 << endl;
    } else if (num1 - num2 == num3) {
        cout << num1 << "-" << num2 << "=" << num3 << endl;
    } else if (num1 * num2 == num3) {
        cout << num1 << " * " << num2 << " = " << num3 << endl;
    } else if (num2 != 0 && num1 / num2 == num3) {
        cout << num1 << " / " << num2 << " = " << num3 << endl;
    } else {
        cout << "No solution found." << endl;
    }
}

int main() {
    PuzzleSolver(2, 3, 6); // should print "2 * 3 = 6"
    PuzzleSolver(10, 5, 5); // should print "10 - 5 = 5"
    PuzzleSolver(7, 0, 1); // should print "No solution found."
    return 0;
}