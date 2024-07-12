// Ques: You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete. Given the integer n, return the number of complete rows of the staircase you will build.
// Example 1:
// Input: n = 5
// Output: 2
// Explanation: Because the 3rd row is incomplete, we return 2.
// Example 2:
// Input: n = 8
// Output: 3
// Explanation: Because the 4th row is incomplete, we return 3.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter a integer n: ";
    cin >> n;

    int lo = 1, hi = n;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if((mid*(mid+1))/2 > n) hi = mid-1;
        else lo = mid+1; 
    }
    cout << hi;
    return 0;
}