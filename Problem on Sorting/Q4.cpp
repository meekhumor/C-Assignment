// Ques: Find the minimum operations required to sort the array in increasing order. In one operation ,
// you can set each occurrence of one element to 0.

#include <bits/stdc++.h>
using namespace std;

bool isSorted (int arr[], int n, int k){
    for (int i = k; i < n-1; i++){
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
    int i = 0, count = 0;
    while(!isSorted(arr, n, i)){
        count++;
        arr[i] = 0;
        i++;
        if(i == n) break;
    }
    cout << "Minimum operations required to sort the array: " << count;
    return 0;
}