// Ques: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).
// Input 1:
// 1 2 -3 4
// 0 0 -4 2
// 1 -1 2 3
// -4 -5 -7 0
// l1 = 1, r1 = 2 , l2 = 3 , r2 = 3
// Output 1: -4

// Input 2:
// 1 2 -3 4

// 0 0 -4 2
// 1 -1 2 3
// -4 -5 -7 0
// l1 = 1, r1 = 0 , l2 = 0 , r2 = 3
// Output 1: 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n, m, l1, r1, l2, r2;
    cout << "Enter dimension of rectangle: ";
    cin >> n >> m;
    cout << "Enter the elements of rectangle: " << endl;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    cout << "Enter l1, r1, l2, r2: ";
    cin >> l1 >> r1 >> l2 >> r2;

    int sum = 0;
    for (int i = l1; i <= l2; i++){
        for (int j = r1; j <= r2; j++){
            sum += a[i][j];
        }
    }
    cout << "Sum of rectangle is: " << sum << endl;

    return 0;
}