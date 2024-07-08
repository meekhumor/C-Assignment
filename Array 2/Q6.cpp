// Ques: Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

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
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j]){
                count++;
            }
            if (count == 0){
                cout << arr[i] << endl;
                return 0;
            }
        }
    }
    cout << "No unique number"

    return 0;
}