// Ques: Count the number of elements strictly greater than x.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n, x;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter x: ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > x){
            count++;
        }
    }
    cout << "Number of elements greater than x: " << count << endl;
    return 0;
}