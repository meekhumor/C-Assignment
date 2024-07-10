// Ques: Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort and display the sorted array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    string arr[n];
    cout << "Enter the strings: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}