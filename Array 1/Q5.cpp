// Ques: WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

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

    int x = 0;
    bool flag = false;
    for (int i = 0; i < n; i++){
        if (arr[i] != x){
            cout << x << " ";
            flag = true;
            break;
        }
        else x++;
    }
    if (flag == false) cout << x;
            
    return 0;
}