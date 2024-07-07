// Ques: Print the table of 'n'. Here 'n' is a integer which the user will input

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= 10; i++){
        cout << n << " X " << i << " = " << n*i << endl;
    }

    return 0;
}