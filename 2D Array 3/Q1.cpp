// Ques: Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.
// Input :
// 1 1 1
// 1 0 1
// 1 1 1
// Output :
// 1 0 1
// 0 0 0
// 1 0 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int m, n;
    cout << "Enter dimension of matrix: ";
    cin >> m >> n;
    cout << "Enter the elements of matrix: " << endl;
    int matrix[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }


    bool zerothRow = false;
    bool zerothCol = false;
    for (int j = 0; j < n; j++){
        if(matrix[0][j] == 0){
            zerothRow = true;
            break;
        }
    }
    for (int i = 0; i < m; i++){
        if(matrix[i][0] == 0){
            zerothCol = true;
            break;
        }
    }
    
    
    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            if(matrix[i][j] == 0) {
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }
    // For rows
    for(int i = 1; i < m; i++){
        if(matrix[i][0] == 0){
            for (int k = 0; k < n; k++){
                matrix[i][k] = 0;
            }
        }
    }
    // For columns
    for(int i = 1; i < n; i++){
        if(matrix[0][i] == 0){
            for (int k = 0; k < m; k++){
                matrix[k][i] = 0;
            }
        }
    }

    if(zerothRow == true){
        for (int k = 0; k < n; k++){
            matrix[0][k] = 0;
        }
    }
    if(zerothCol == true){
        for (int k = 0; k < m; k++){
            matrix[k][0] = 0;
        }
    }

    // Printing the matrix
    cout << "Matrix after zeroing: " << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}