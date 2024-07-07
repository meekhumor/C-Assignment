// Ques : Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int a, b, c;
    cout << "Enter the sides of a triangle : ";
    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << "Equilateral Triangle";
    else if (a == b || b == c || a == c)
       cout << "Isosceles Triangle";
    else
       cout << "Scalene Triangle";
    
    return 0;
}