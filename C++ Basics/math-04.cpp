#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int arr[] = {14,32,13,56,23,56,32};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_val = arr[0];
    int min_val = arr[0];
    for (int i=1; i < n; i++){
        max_val = max(max_val, arr[i]);
        min_val = min(min_val, arr[i]);
    }
    cout << "Maximum value in the array: " << max_val << endl;
    cout << "Minimum value in the array: " << min_val << endl;

    return 0;
}