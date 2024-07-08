// Ques: Write a function that takes the radius of a circle as an argument and returns its area.

#include <bits/stdc++.h>
using namespace std;

void area(float r){
    float area = 3.14 * r * r;
    cout << "The area of the circle is: " << area << endl;
}

int main()
{
    system("cls");
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    area(r);
    return 0;
}