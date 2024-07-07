// Ques: Print the factorials of first ‘n’ numbers
// Sample Input : 10
// Output :
// 1
// 2
// 6
// 24
// 120
// 720
// 5040
// 40320
// 362880
// 3628800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fac = 1;
    for (int i = 1; i <= n; i++){
        fac *= i;
        cout << fac << endl; 
    }
    return 0;
}