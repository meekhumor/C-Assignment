// Ques: Find the first non-repeating element in the array .

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int arr[5]={1,2,2,4,7};
    int n=5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        if (i != j && arr[i] == arr[j])break;
        if (j == n){
            cout<<arr[i];
            return 0;
        }
    }
    return 0;
}