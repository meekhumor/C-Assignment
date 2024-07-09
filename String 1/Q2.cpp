// Ques: Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4
// Input : "abdc"
// Output : 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    cout << "Enter a string : ";
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            continue;
        }
        else count++;
    }
    cout << "Number of consonants : " << count << endl;

    return 0;
}