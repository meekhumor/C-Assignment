// Ques: Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True
// Input : s = "book" , t = "hook"
// Output : False

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string s, t;
    cout << "Enter the strings : ";
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s == t) cout << "The strings are anagram";
    else cout << "The strings are not anagram";

    return 0;
}