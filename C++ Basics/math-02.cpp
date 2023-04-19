#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n, num, max_val = INT_MIN, min_val = INT_MAX;
    cout << "What number of inputs your Prefer? \n10";
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=1; i <= n; i++){
        cout << "Enter element: " << i << ": ";
        cin >> num;
        max_val = max(max_val, num);
        min_val = min(min_val, num);
    }
    cout << "Maximum element is " << max_val << endl;
    cout << "Minimum element is " << min_val << endl;
    return 0;

}

