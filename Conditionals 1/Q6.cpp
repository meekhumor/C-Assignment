// Ques : If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks. 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int a, b, c;
    cout << "Enter Marks of A, B and C : ";
    cin >> a >> b >> c;
    if (a < b && a < c)
        cout << "Student A Scored Least Marks";
    else if (b < a && b < c)
       cout << "Student B Scored Least Marks";
    else
       cout << "Student C Scored Least Marks";
    
    return 0;
}
