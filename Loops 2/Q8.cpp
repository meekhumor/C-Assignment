// Ques: Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output : 1 1 2 3 5 8 13 21 34 55

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int a = 1, b = 1, temp = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n-2; i++){
        temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }
    return 0;
}