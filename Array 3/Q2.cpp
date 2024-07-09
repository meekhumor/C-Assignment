// Ques: Find the factorial of a large number and use an array to store every digit.

#include <bits/stdc++.h>
using namespace std;

int mul(int arr[], int val , int size){
    int carry = 0;
    for (int i = 0; i < size; i++){
        int product = arr[i] * val + carry;
        arr[i] = product % 10;
        carry = product / 10;
    }
    while (carry){
        arr[size] = carry % 10;
        carry /= 10;
        size ++;
    }
    return size;
}

int main()
{
    system("cls");
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact[500], size;
    fact[0] = 1;
    size = 1;
    int x = 2, i = 2;

    for (int i = 2; i <= n; i++){
        size = mul(fact, i, size);
    }

    for (int i = size - 1; i >= 0; i--){
        cout << fact[i];
    }


    return 0;
}