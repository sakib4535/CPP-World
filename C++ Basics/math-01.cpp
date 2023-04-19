#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a = 45, b = 20;
    int max_val = max(a,b);
    int min_val = min(a,b);
    cout << "Maximum of " << a << " and " << b << " is " << max_val << endl;
    cout << "Minimum of " << a << " and " << b << " is " << min_val << endl;

    return 0;
}