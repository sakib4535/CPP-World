#include<iostream>
#include<string>

using namespace std;

class StringArray {
private:
    int size;
    string *arr;
public:
    StringArray(int s){
        size = s;
        arr = new string[size];
    }

    int countFirstLastSame(){
        int count = 0;

        for(int i=0; i<size; i++){
            if(arr[i].front() == arr[i].back()){
                count++;
            }
        }

        return count;
    }

    void setElement(int i, string value){
        arr[i] = value;
    }
};

int main(){
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    StringArray stringArray(n);

    cout << "Enter the elements of the array: " << endl;

    for(int i=0; i < n; i++){
        string value;
        cin >> value;
        stringArray.setElement(i, value);
    }

    int count = stringArray.countFirstLastSame();

    cout << "Number of strings with common first and last character: " << count;

    return 0;
}