#include <iostream>
#include <string>

using namespace std;

int main() {
    // Initializing a string
    string myString = "Dont Worry!";

    // Printing the string
    cout << "My string is: " << myString << endl;

    // Getting the length of the string
    int length = myString.length();
    cout << "The length of my string is: " << length << endl;

    // Accessing individual characters of the string
    char firstChar = myString[0];
    char lastChar = myString[length - 1];
    cout << "The first character of my string is: " << firstChar << endl;
    cout << "The last character of my string is: " << lastChar << endl;

    // Concatenating two strings
    string newString = myString + " This is a new string!";
    cout << "The new string is: " << newString << endl;

    // Comparing two strings
    string otherString = "Hell Fabulous";
    if (myString == otherString) {
        cout << "The two strings are equal." << endl;
    } else {
        cout << "The two strings are not equal." << endl;
    }

    return 0;
}
