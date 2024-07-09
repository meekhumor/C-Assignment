// Ques: Write a program to print the elements of both the diagonals in a square matrix.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 1   3
//   5
// 7   9

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter dimension of square: ";
    cin >> n;
    cout << "Enter the elements of square: " << endl;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    cout << "Diagonal elements of square: " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j || i+j == n-1) cout << a[i][j] << " ";
            else cout << "  ";
        }
        cout << endl;
    }


    return 0;
}