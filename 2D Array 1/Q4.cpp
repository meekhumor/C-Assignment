// Ques: Write a C++ program to find the largest element of a given 2D array of integers.
// Input 1:
// 1 3 4 6
// 2 4 5 7
// 3 5 6 8
// 4 6 7 9
// Output 1: 9

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n, m;
    cout << "Enter dimension of rectangle: ";
    cin >> n >> m;
    cout << "Enter the elements of rectangle: " << endl;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int max = a[0][0];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] > max){
                max = a[i][j];
            }
        }
    }

    cout << "The largest element of the rectangle is: " << max << endl;

    return 0;
}