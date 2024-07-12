// Given a positive integer, return true if it is a power of  using recursion

#include <bits/stdc++.h>
using namespace std;

bool checkPower(float n){
    if(n < 1) return false;
    if(n == 1) return true;
    return checkPower(n/2);
}

int main()
{
    system("cls");
    float n;
    cout << "Enter a number: ";
    cin >> n;

    if(checkPower(n)) cout << "True";
    else cout << "False";
    return 0;
}