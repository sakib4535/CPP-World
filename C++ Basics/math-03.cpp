#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 2.0;
    double y = 3.0;
    double z = -4.0;
    
    double abs_val = abs(z);          // returns the absolute value of z
    double sqrt_val = sqrt(x);        // returns the square root of x
    double pow_val = pow(x, y);       // returns x raised to the power of y
    double exp_val = exp(x);          // returns e raised to the power of x
    double log_val = log(y);          // returns the natural logarithm of y
    double log10_val = log10(y);      // returns the base-10 logarithm of y
    double ceil_val = ceil(x);        // returns the smallest integer greater than or equal to x
    double floor_val = floor(x);      // returns the largest integer less than or equal to x
    double round_val = round(x);      // returns the value of x rounded to the nearest integer

    cout << "Absolute value of " << z << " is " << abs_val << endl;
    cout << "Square root of " << x << " is " << sqrt_val << endl;
    cout << x << " raised to the power of " << y << " is " << pow_val << endl;
    cout << "e raised to the power of " << x << " is " << exp_val << endl;
    cout << "Natural logarithm of " << y << " is " << log_val << endl;
    cout << "Base-10 logarithm of " << y << " is " << log10_val << endl;
    cout << "Smallest integer greater than or equal to " << x << " is " << ceil_val << endl;
    cout << "Largest integer less than or equal to " << x << " is " << floor_val << endl;
    cout << "Value of " << x << " rounded to the nearest integer is " << round_val << endl;

    return 0;
}
