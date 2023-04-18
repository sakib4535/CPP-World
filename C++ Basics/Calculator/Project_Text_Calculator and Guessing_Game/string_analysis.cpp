#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    string input;
    cout << "Enter Whatever You Have On Your Mind: ";
    getline(cin, input);

    //calculate length of string
    int length = input.length();
    cout << "Length of string: " << length << endl;

    // Count Number of words
    int word_count = 1;
    for(int i=0; i < length; i++)
    {
        if(input[i] == ' ')
        {
            word_count++;
        }
    }

    cout << "Number of Words: " << word_count << endl;

    //Counting number of Vowels
    int vowel_count = 0;
    for(int i=0; i < length; i++)
    {
        char c = tolower(input[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o'|| c == 'u'){
            vowel_count++;
        }
    }
    cout << "Number of Vowels: " << vowel_count << endl;

    // Count number of consonants
    int consonantCount = 0;
    for(int i=0; i < length; i++) 
    {
        char ch = tolower(input[i]);
        if(ch >= 'a' && ch <= 'z' && ch != 'a' && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
            consonantCount++;
        }
    }
    cout << "Number of consonants: " << consonantCount << endl;

    // Count number of digits
    int digitCount = 0;
    for(int i=0; i < length; i++){
        if(isdigit(input[i]))
        {
            digitCount++;
        }
    }
    cout << "Number of Digits: " << digitCount << endl;

    // Count number of special characters
    int specialCharCount = 0;
    for(int i=0; i < length; i++) {

        char c = input[i];
        if(isalpha(c) && !isdigit(c) && c != ' ')
        {
            specialCharCount++;
        }
    }
    cout << "Number of special characters: " << specialCharCount << endl;
    // Calculate sum of all digits in string
    int digitSum = 0;
    for(int i=0; i < length; i++) 
    {
        if(isdigit(input[i])) 
        {
            digitSum += input[i] - '0';
        }
    }
    cout << "Sum of all digits: " << digitSum << endl;

    // Calculate square root of sum of squares of all digits in string
    double digitSquaresSum = 0;
    for(int i=0; i < length; i++) 
    {
        if(isdigit(input[i])) 
        {
            digitSquaresSum += pow(input[i] - '0', 2);
        }
    }
    double digitSquaresRoot = sqrt(digitSquaresSum);
    cout << "Square root of sum of squares of all digits: " << digitSquaresRoot << endl;

    srand(time(0)); //seed random number generator
    int numberToGuess = rand() % 100 + 1; //generate a random number between 1 and 100
    int guess = 0;
    int attempts = 0;

    cout << "Guess the number between 1 and 100" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < numberToGuess) {
            cout << "Too low!" << endl;
        } else if (guess > numberToGuess) {
            cout << "Too high!" << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << endl;
        }
    } while (guess != numberToGuess);

    return 0;
}





