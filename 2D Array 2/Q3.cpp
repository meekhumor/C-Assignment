// Ques: Write a program to print the matrix in wave form.
// Input :
// 1 2 3
// 4 5 6
// 7 8 9
// Output : 7 4 1 2 5 8 9 6 3

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

    cout << "Matrix in wave form: " << endl;
    int i = n-1, j = 0;
    int turn = true;
    while (j < n){
        if (turn == false){
            while (i < n){
                cout << a[i][j] << " ";
                i++;
            }
            i--;
            turn = true;
        }
        else { 
            while (i >= 0){
                cout << a[i][j] << " ";
                i--;
            }
            i++;
            turn = false;
        }
        j++;
        
    }
    return 0;
}