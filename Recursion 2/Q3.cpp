// Given an integer num, return the number of steps to reduce it to zero. In one step, if the
// current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it. [Leetcode 1342]

#include <bits/stdc++.h>
using namespace std;

int numberOfSteps(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return numberOfSteps(n/2) + (n%2 == 0? 1:2); 
}
int main()
{
    system("cls");
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << numberOfSteps(n);
    return 0;
}