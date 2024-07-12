// Ques: Write a program to calculate the reverse of a given positive integer using recursion1

#include <bits/stdc++.h>
using namespace std;

void printReverse(int n){
    if(n/10 == 0) {
        cout << n;
        return;
    }
    cout << n%10;
    printReverse(n/10);
}
int main()
{
    system("cls");
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printReverse(n);
    return 0;
}