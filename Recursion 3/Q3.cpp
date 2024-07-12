// Ques: Write a program to find the index of a given element in an array using recursion. If the
// element is present, return its index; otherwise, return -1

#include <bits/stdc++.h>
using namespace std;

int idxOfElement(int arr[], int n, int k){
    if(n == 0) return -1; 
    return (arr[n-1] == k)? n-1 : idxOfElement(arr,n-1,k);
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
    cout << "Enter target: ";
    cin >> k;

    cout << "Index of a given element in an array: " << idxOfElement(arr, n, k);
    return 0;
}