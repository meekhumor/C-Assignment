// Ques: Print the following pattern
// Sample Input : n = 4
// Output :
//    ****
//   ****
//  ****
// ****

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

        for (int j = 0; j < n; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}