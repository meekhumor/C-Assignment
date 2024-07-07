// Ques: WAP for finding the volume of the cylinder by taking radius and height as input.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    float r, h, vol;
    cout << "Enter the radius and height of the cylinder: ";
    cin >> r >> h;
    vol = 3.14 * r * r * h;
    cout << "Volume of the cylinder is: " << vol << endl;
    return 0;
}