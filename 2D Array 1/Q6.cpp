// Ques: Write a function which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
// Input 1:
// 1 2 3 4 5
// 3 4 5 6 7
// 7 6 5 4 3
// 8 7 6 5 4
// 1 2 37 8 0
// Output 1:
//     3
//     5
// 7 6 5 4 3
//     6
//     37

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

    cout << "Middle elements of square: ";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == ((n-1) / 2) || j == ((n-1) / 2)) cout << a[i][j] << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}