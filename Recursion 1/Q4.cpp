// Ques: There are n stairs, and a person standing at the bottom wants to climb the stairs to reach the nth stair. The person can climb either 1, , or  stairs at a time. Write a program to count the number of ways the person can reach the top using recursion.

#include <bits/stdc++.h>
using namespace std;

int stairs(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(n == 3) return 4;

    return stairs(n-1) + stairs(n-2) + stairs(n-3);
}
int main()
{
    system("cls");
    int n;
    cout << "Enter no. of stairs: ";
    cin >> n;

    cout << stairs(n);
    return 0;
}