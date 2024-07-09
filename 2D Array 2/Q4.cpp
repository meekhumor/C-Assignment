// Ques: Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
// Input 1: n = 3
// Output 1: [[1,2,3],[8,9,4],[7,6,5]]
// Input 2: n = 1
// Output 2: [[1]]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    int left = 0, right = n-1;
    int top = 0, bottom = n-1;
    int arr[n][n];

    int x = 1;
    while (top <= bottom && left <=right){
        for (int i = left; i <= right; i++){
            arr[top][i] = x;
            x++;
        }
        top++;
        for (int i = top; i <= bottom; i++){
            arr[i][right] = x;
            x++;
        }
        right--;
        for (int i = right; i >= left; i--){
            arr[bottom][i] = x;
            x++;
        }
        bottom--;
        for (int i = bottom; i >= top; i--){
            arr[i][left] = x;
            x++;
        }
        left++;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}