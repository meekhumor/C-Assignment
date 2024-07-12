// Write a program to print the sum of all odd numbers from a to b (inclusive) using recursion

#include <bits/stdc++.h>
using namespace std;

int sumOdd(int a, int b){
    if(a > b) return 0;
    if(a % 2 != 0) return a + sumOdd(a+1, b);
    else return sumOdd(a+1,b);
}
int main()
{
    system("cls");
    int a, b;
    cout << "Enter the range of numbers: ";
    cin >> a >> b;

    cout << "Sum of all odd numbers from " << a << " to " << b << " is " << sumOdd(a, b) << endl;
    return 0;
}