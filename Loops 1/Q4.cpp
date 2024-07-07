// Ques: Display this AP 4,7,10,13,16... upto 'n' terms

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a = 4;
    for (int i = 0; i < n; i++){
        cout << a << " ";
        a = a + 3;
    }
    
}