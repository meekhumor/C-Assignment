// Ques: Print the following pattern
// Input: n = 4
// Output:
// A B C D E F G
// A B C   E F G
// A B       F G
// A           G

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++){
        cout << char(65 + i) << " ";    
    }
    cout << endl;

    for (int i = 1; i < n; i++){
        for (int j = 0; j < n - i; j++){
            cout << char(65 + j) << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++){
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++){
            cout << char(64 + n+i+j) << " ";
        }
        cout << endl;
    }
    return 0;
}