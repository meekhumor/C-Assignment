// Ques: Write a program to count the minimum number of notes in a given amount using the switch statement.
// Input 1: 510
// Output 1: notes of “500” = 1 and notes of “10” = 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    switch(amount>=500)
    {
        case 1:
        cout<<"Notes of 500: "<< amount/500 << endl;
        amount = amount % 500;
        break;
    }
    switch(amount >=100)
    {
        case 1:
        cout<<"Notes of 100: "<< amount/100 << endl;
        amount = amount % 100;
        break;
    }
    switch(amount >=50)
    {
        case 1:
        cout<<"Notes of 50: "<< amount/50 << endl;
        amount = amount % 50;
        break;
    }
    switch(amount >=20)
    {
        case 1:
        cout<<"Notes of 20: "<< amount/20 << endl;
        amount = amount % 20;
        break;
    }
    switch(amount >=10)
    {
        case 1:
        cout<<"Notes of 10: "<< amount/10 << endl;
        amount = amount % 10;
        break;
    }
    switch(amount >=5)
    {
        case 1:
        cout<<"Notes of 5: "<< amount/5 << endl;
        amount = amount % 5;
        break;
    }
    switch(amount >=1)
    {
        case 1:
        cout<<"Notes of 1: "<< amount/1 << endl;
        break;
    }
    return 0;
}