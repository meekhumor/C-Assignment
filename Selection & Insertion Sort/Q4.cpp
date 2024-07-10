// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two numbers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two numbers.

#include <bits/stdc++.h>
using namespace std;

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
    
    for (int i = 1; i < n; i++){
        int j = i;
        while (j >= 1){
            if (arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
                j--;
            }
            else{
                break;
            }
        }
    }

    

    return 0;
}