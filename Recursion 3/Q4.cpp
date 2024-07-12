// Ques: Print all the elements of an array in reverse order using recursion.

#include <bits/stdc++.h>
using namespace std;

void printReverse(int arr[], int n){
    if(n == 0) return;
    cout << arr[n-1] << " ";
    printReverse(arr,n-1);
}

int main()
{
    system("cls");
    int n, k;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    printReverse(arr, n);
    return 0;
}