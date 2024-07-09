// Ques: Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    cout << "Enter the string : ";
    cin >> str;
    int n = str.length();
    for (int i = 0; i < n / 2; i++){
        if (str[i]!= str[n - i - 1]){
            cout << "Not a palindrome";
            return 0;
        }
    }
    cout << "Yes, It is a palindrome";
    return 0;
}