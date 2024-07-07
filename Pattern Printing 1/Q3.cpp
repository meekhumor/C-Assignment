// Ques: Print the following pattern
// Input: n = 4
// Output:
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
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << char(64+j) << " ";
        }
        cout << endl;
    }
    return 0;
}