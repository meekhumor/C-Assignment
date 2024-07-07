// Ques: Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n-i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}