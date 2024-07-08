// Ques: Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << i + 1 << " ";    
    }
    for (int i = n-1; i >= 1; i--){
        cout << i << " ";    
    }
    cout << endl;

    for (int i = 1; i < n; i++){
        for (int j = 0; j < n - i; j++){
            cout << j + 1 << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++){
            cout << "  ";
        }
        for (int j = n - i; j >= 1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}