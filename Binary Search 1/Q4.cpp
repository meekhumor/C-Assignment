// Ques: Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n = 5;
    int arr[n] = {1,2,3,3,4};

    int lo = 0, hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == mid+1) lo = mid+1;
        else hi = mid-1;
    }

    cout << "Repeated number: " << arr[hi]; 


    return 0;
}