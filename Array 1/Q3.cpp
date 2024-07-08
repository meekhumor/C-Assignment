// Ques: Find the minimum value out of all elements in the array.

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
    int min = INT_MAX;
    for (int i = 0; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    cout << "The minimum value in a array is: " << min << endl;
    
    return 0;
}
