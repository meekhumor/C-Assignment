// Ques: WAP to find the difference between ASCII of two characters ,take them as input.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    char a, b;
    cout << "Enter the first character: ";
    cin >> a;
    cout << "Enter the second character: ";
    cin >> b;
    cout << "The difference between ASCII of " << a << " and " << b << " is: " << abs(a-b);
    return 0;
}