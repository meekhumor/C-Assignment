// Ques: Given an array, predict if the array contains duplicates or not.

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
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
    }
    if (flag == true){
        cout << "The array contains duplicates.";
    }
    else{
        cout << "The array does not contain duplicates.";
    }
    
    return 0;
}