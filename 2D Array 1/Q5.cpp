// Ques: Write a program to print the row number having the maximum sum in a given matrix.
// Input 1:
// 1 3 5 7
// 3 4 7 8
// 1 4 12 3
// Output 1: 2

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

    int max = INT_MIN;
    int maxIndex = 0;
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < m; j++){
            sum += a[i][j];
        }
        if(sum >= max) {
            max = sum;
            maxIndex = i;
        }

    }
    cout << "Row number having maximum sum in a given matrix is: " << maxIndex;

    
    return 0;
}