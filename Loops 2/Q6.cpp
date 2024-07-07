// Ques: WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int temp = n;
    int reverse = 0;

    while (temp > 0){
        reverse *= 10;
        reverse += temp % 10;
        temp /= 10;
    }
    cout << "Sum of " << n << " and its reverse is " << reverse + n;

    return 0;
}