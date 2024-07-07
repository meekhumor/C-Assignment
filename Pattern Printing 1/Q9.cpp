// Ques: Print the following pattern
// Input : n = 4
// Output :
// A
// A B
// A B C
// A B C D

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
            cout << char(65+j) << " ";
        }
        cout << endl;
    }
    return 0;
}