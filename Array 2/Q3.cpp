// Ques: Check if the given array is sorted or not

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
    bool flag = false;
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1]){
            cout << "Not Sorted";
            flag = true;
        }
    }
    if (flag == false) cout << "Sorted";
    return 0;
}