// Ques: Display this GP 3,12,48,... upto 'n' terms

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a = 3;
    for (int i = 0; i < n; i++){
        cout << a << " ";
        a = a * 4;
    }
    
    return 0;
}