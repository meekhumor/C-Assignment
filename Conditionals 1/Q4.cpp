// Ques : Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int l, b;
    cout << "Enter the length and breadth of the rectangle : ";
    cin >> l >> b;
    int area = l * b;
    int perimeter = 2 * (l + b);
    if (area > perimeter)
       cout << "Area is greater than perimeter";
    else
      cout << "Area is less than perimeter";
    
    return 0;
}