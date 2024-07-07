// Ques: Print the following pattern
// Input: n = 4
// Output:
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            cout << "  ";
        }

        for (int j = 0; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j <= i; j++){
            cout << "  ";
        }

        for (int j = 1; j <= n-i-1; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}