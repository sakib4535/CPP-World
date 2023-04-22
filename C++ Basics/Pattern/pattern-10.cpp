#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    char letter = 'A';

    for(int i=1; i<=rows; i++){
        //print the spaces before the letters
        for(int j=1; j<=rows - i; j++){
            cout << "  "; // Double Space
        }
        
        //print the letters
        for(int k=1; k<= i; k++){
            cout << letter << " "; // single space
            letter++;
        }
        //print the spaces after the letters
        for(int l=1; l <= rows - i; l++){
            cout << "  ";
        }
        //print numbers
        for(int m=1; m<=i; m++){
            cout << m << " ";
        }
        cout << endl;
        letter = 'A'; // Reset the letter to "A" for the next row
    }

    return 0; 
}