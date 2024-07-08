// Ques: Calculate the product of all the elements in the given array.

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
    int prod = 1;
    for (int i = 0; i < n; i++){
        prod *= arr[i];
    }
    cout << "The product of all the elements in the array is: " << prod << endl;

    return 0;
}