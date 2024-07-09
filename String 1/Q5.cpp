// Ques: Input a string of length less than 10 and convert it into integer without using builtin function.
// Input : "3244"
// Output : 3244
// Input : "12"
// Output : 12

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    cout << "Enter a string of length less than 10 : ";
    cin >> str;
    int num = (str[str.length()-1] - '0'), x = 1;
    for (int i = str.length()-2; i >= 0; i--){
        num += (str[i] - '0')* pow(10,x); 
        x++;
    }
    cout << "The integer equivalent of the string is : " << num << endl;

    return 0;
}