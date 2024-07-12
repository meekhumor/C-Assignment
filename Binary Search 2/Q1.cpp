// Ques: Write a program to apply binary search in array sorted in decreasing order.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n = 5, k = 5;
    int arr[n] = {5, 4, 3, 2, 1};

    int lo = 0, hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if (arr[mid] > k) lo = mid+1;
        else hi = mid-1;
    }

    cout << lo;
    return 0;
}