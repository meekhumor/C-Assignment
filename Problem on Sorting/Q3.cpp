// Ques: Given an integer array and an integer k where k<=size of array, We need to return the kth smallest element of the array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n, k;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    sort(arr, arr + n);
    cout << "The kth smallest element is: " << arr[k - 1];
    
    return 0;
}