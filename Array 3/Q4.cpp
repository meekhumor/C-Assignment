// Ques: Check if an array is a subset of another .

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int arr1[3] = {1,3,5};
    int arr2[5] = {1,3,5,8,6};

    int count = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            if (arr1[i] == arr2[j]) {
                count++;
                break;
            }
        }
    }
    if(count == 3) cout << "array1 is a subset of array2";
    else cout << "array1 is not a subset of array2";
    return 0;
}