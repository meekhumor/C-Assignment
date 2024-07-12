// Ques: Write a program to find the sum of all elements in an array using recursion.

#include <bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int n){
    if(n == 1) return arr[0];
    return arr[n-1] + sumArray(arr, n-1);
}


int main()
{
    system("cls");
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << sumArray(arr,n);
    return 0;
}