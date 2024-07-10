// Ques: Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"
// Input : str = "pw"
// Output : "pwwp"

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    cout << "Enter a string : ";
    cin >> str;
    string rev = str;
    int len = rev.length();
    int mid = len / 2;
    for (int i = 0; i < mid; i++){
        swap(rev[i], rev[len - i - 1]);
    }
    cout << str + rev;
    
    return 0;
}