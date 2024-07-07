// Ques : Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    float r, area, circumference;
    cout << "Enter the radius of the circle : ";
    cin >> r;
    circumference = 2 * 3.14 * r;
    area = 3.14 * r * r;
    if(area > circumference)
       cout << "Area of the circle is larger than the circumference";
    else
      cout << "Area of the circle is smaller than the circumference";
    return 0;
}