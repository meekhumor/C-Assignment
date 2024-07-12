// Ques: Given an array, arr[] containing n integers, the task is to find an integer (say K) such that after
// replacing each and every index of the array by |ai – K| where ( i ∈ [1, n]), results in a sorted
// array. If no such integer exists that satisfies the above condition then return -1.

#include <bits/stdc++.h>
using namespace std;

bool isSorted (int arr[], int n){
    for (int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]) return false;
    }
    return true;
}
int main()
{
    system("cls");
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int k = 0; k < 10; k++){
        for (int i = 0; i < n; i++){
            arr[i] = abs(arr[i] - k);
            cout << arr[i] << " ";
        }
        cout << endl;
        if (isSorted(arr, n)){
            cout << "The required number is: " << k << endl;
            return 0;
        }
        
        for (int i = 0; i < n; i++){
            arr[i] = abs(arr[i] + k);
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    cout << "No such number exists" << endl;

    return 0;
}