// Ques : Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    char ch;
    cout << "Enter any character : ";
    cin >> ch;
    if (ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90)
       cout << "Alphabet" << endl;
    else if (ch >= 48 && ch <= 57)
     cout << "Digit" << endl;
    else if (ch >= 33 && ch <= 47 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 126)
       cout << "Special Character" << endl;
    else
      cout << "Not a character" << endl;
    
    return 0;
}