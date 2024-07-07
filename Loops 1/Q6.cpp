// Ques: Write a program to print all the ASCII vqalues and their equivalent characters of 26 alphabets using while loop

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int i = 65;
    while (i <= 90){
        cout << i << " " << char(i) << endl;
        i++;
    }
    return 0;
}