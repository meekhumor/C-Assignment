// Ques: Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe
// Input :str = "pwians"
// Output : pwisna

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    cout << "Enter a string : ";
    cin >> str;
    int len = str.length();
    int mid = len / 2;
    for (int i = 0; i < mid/2; i++){
        swap(str[mid+i], str[len - i - 1]);
    }
    cout << str << endl;

    return 0;
}