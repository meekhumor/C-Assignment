// Ques: Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 0-based indexing.
// Input : str = "Pbwcshkuiglhlds"
// Output : "P#w#s#k#i#l#l#s"
// Input : str = "a"
// Output : "a"

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    cout << "Enter a string : ";
    cin >> str;

    for (int i = 0; i < str.length(); i++){
        if (i % 2 == 1){
            str[i] = '#';
        }
    }
    cout << str << endl;
    return 0;
}