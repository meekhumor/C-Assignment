// Ques: Write a program to calculate the sum of the digits of a given positive integer using recursion1

#include <bits/stdc++.h>
using namespace std;

int sumDigit(int n){
    if(n/10 == 0) return n;
    return n%10 + sumDigit(n/10);
}
int main()
{
    system("cls");
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << sumDigit(n);
    return 0;
}