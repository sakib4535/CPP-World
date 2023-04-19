#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int matrix1[3][3] = {{3,4,5}, {-2,3,4}, {-6,-4,3}};
    int matrix2[3][3] = {{9,-2,5}, {-1,3,6}, {8,9,-7}};
    int result [3][3];

    // Add two matrices elementwise

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the result of matrix addition
    cout << "The result of matrix addition is: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    // Multiply Two Matrices

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            result[i][j] = 0;
            for(int k=0; k<3; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "The result of matrix Multiplication: "<< endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}