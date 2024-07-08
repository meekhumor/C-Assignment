// Ques: WAP to find the largest three elements in the array.

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

    int max, max2, max3;
    max = max2 = max3 = arr[0];

    for(int i = 0; i < n; i++){
        if (arr[i] > max){
            max3 = max2;
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2){
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3) max3 = arr[i];
    }
    cout << "Three largest elements of an array are "<<max<<", "<<max2<<" and "<<max3;

    return 0;
}