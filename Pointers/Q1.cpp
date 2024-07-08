// Ques: Write a program to find the product of two numbers using pointers.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int *p = &a;
    int *q = &b;
    cout << "Product of " << a << " and " << b << " is " << *p * *q << endl;
    
    return 0;
}