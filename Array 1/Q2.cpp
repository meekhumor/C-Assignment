// Ques: Find the second largest element in the given Array in one pass.

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
    int max = arr[0];
    int second_max = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max){
            second_max = arr[i];
        }
    }
    cout << "Second largest element is: " << second_max << endl;
    
    return 0;
}