// Ques : Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int year;
    cout << "Enter the year : ";
    cin >> year;
    if (year % 4 == 0)
        cout << "Leap year";
    else
       cout << "Not a leap year";

    return 0;
}