// Ques: Write a program to rotate the matrix by 90 degrees anti-clockwise.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 3 6 9
// 2 5 8
// 1 4 7

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

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i <= j) swap(a[i][j] , a[j][i]);
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n/2; j++){
            swap(a[j][i] , a[n-j-1][i]);
        }
    }

    cout << "Rotated matrix: " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}