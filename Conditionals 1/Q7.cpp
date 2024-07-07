// Ques : Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int x, y;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of y : ";
    cin >> y;
    if (x == 0 && y == 0)
       cout << "The point lies at origin";
    else if (x == 0)
      cout << "The point lies on the y-axis";
    else if (y == 0)
     cout << "The point lies on the x-axis";
    else
      cout << "The point does not lie on the x-axis or y-axis";

    return 0;
}