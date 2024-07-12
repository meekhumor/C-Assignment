// Ques: Write a program to find the minimum e.ement of an array using recursionC

#include <bits/stdc++.h>
using namespace std;

int minArray(int arr[], int n){
    if(n == 1) return arr[0];
    return min(arr[n-1], minArray(arr, n-1));
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

    cout << minArray(arr, n);
    return 0;
}