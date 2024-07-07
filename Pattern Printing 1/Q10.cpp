// Ques: Print the following pattern
// Input: n = 4
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = i; j > 0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}