// Ques: Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter binary elements of an array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int lo = 0, hi = n-1;
    while (lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == 0) lo = mid + 1;
        else hi = mid - 1;
    }
    cout << "Counts of 1's in an array: " << n-hi-1;
    return 0;
}