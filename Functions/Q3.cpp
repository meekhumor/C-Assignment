// Ques: Given two numbers a and b, write a function to print all odd numbers between them.

#include <bits/stdc++.h>
using namespace std;

void oddNumbers(int a, int b){
    for(int i = a; i <= b; i++){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }
}

int main()
{
    system("cls");
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    oddNumbers(a, b);
    return 0;
}