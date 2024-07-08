// Ques: If an array arr contains n elements, then check if the given array is a palindrome or not .

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    while (l < r){
        if (arr[l]!= arr[r]){
            cout << "Not a palindrome";
            return 0;
            break;
        }
        l++;
        r--;
    }
    cout << "Palindrome";
    return 0;
}