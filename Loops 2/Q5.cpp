// Ques: WAP to print the sum of all the even digits of a given number.
// Sample Input : 4556
// Output: 10

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int sum = 0;
    while (n > 0){
        int rem = n % 10;
        if (rem % 2 == 0){
            sum += rem;
        }
        n /= 10;
    }
    cout << "Sum of all the even digits of given no. is " << sum << endl;
    return 0;
}