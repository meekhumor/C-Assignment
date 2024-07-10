// Ques: Print the following pattern
// Input : n = 4
// Output :

// *     *
// **   **
// *** ***
// *******
// *******
// *** ***
// **   **
// *     *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i >= j) cout << "* ";
            else cout << "  ";
        }
        for (int j = 1; j < n; j++){
            if(i+j >= n-1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i+j <= n-1) cout << "* ";
            else cout << "  ";
        }
        for (int j = 1; j < n; j++){
            if(i <= j) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
