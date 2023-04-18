#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a Line of Text: ";
    getline(cin, input);

    int word_count = 1; // initializing 1 as the first word is not preceded by a space
    int char_count = 0;

    for(int i=0; i < input.length(); i++) 
    {
        if(input[i] == ' ') 
        {
            word_count++;
        }
        else
        {
            char_count++;
        }
    }
    cout << "Numbers of words: " << word_count << endl;
    cout << "Number of characters: " << char_count << endl;

    return 0;
}