// Print the following pattern
// Input: n = 4
// Output:
//       A
//     A B C
//   A B C D E
// A B C D E F G

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++){
            cout << char(64+j) << " ";
        }
        cout << endl;
    }
    return 0;
}