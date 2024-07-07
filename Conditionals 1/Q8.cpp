// Ques : Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter the coordinates of the first point : ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point : ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of the third point : ";
    cin >> x3 >> y3;
    if ((x1 - x2) * (y1 - y2) == (x1 - x3) * (y1 - y3) && (x2 - x3) * (y2 - y3) == (x2 - x1) * (y2 - y1) && (x3 - x1) * (y3 - y1) == (x3 - x2) * (y3 - y2))
       cout << "All the points fall on a straight line";
    else
      cout << "All the points do not fall on a straight line";
    
    return 0;
}