// Ques: Check if the given array is almost sorted. (elements are at-most one position away

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

    int count = 0;
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1]){
            count++;
        }
    }

    if(count > 1){
        cout << "Not Sorted";
    }
    else{
        cout << "ALmost Sorted";
    }

    return 0;
}