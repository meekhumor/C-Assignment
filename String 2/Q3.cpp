// Ques: Input a string and return the number of substrings that contain only vowels.
// Input : str = "abjkoe"
// Output : 4
// Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
// Input : str = "hgdhpw"
// Output : 0

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
            count++;
        }
    }

    return 0;
}