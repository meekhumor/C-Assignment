// Ques: Write a program to add two matrices and save the result in one of the given matrices.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9

// 4 5 8
// 0 0 8
// 1 2 0
// Output 1:
// 5 7 11
// 4 5 14
// 8 10 9

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int a[3][3], b[3][3], c[3][3];
    cout << "Enter the elements of matrix 1: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of matrix 2: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> b[i][j];
        }
    }
    cout << "The sum of the two matrices is: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}